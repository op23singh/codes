#include<bits/stdc++.h>

using namespace std;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

template<typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
int N, tempN;
set<vector<int> > s;
int dp[33][2];

int getValue(vector<int> &temp) {
    int base = 1, num = 0;
    for (int i = temp.size() - 1; i >= 0; i--) {
        if (temp[i] == 1)num += base;
        base <<= 1;
    }
    return num;
}

int solve(int n, int lastchosen, vector<int> &temp) {
    if (n<0) {
        if (s.find(temp) != s.end() and getValue(temp) > tempN)return 0;
        s.insert(temp);
        return 1;
    }
    if (lastchosen != -1 and dp[n][lastchosen] != -1 and s.find(temp)!=s.end()) {
        return dp[n][lastchosen];
    }
    if (lastchosen == 1) {
        temp[n] = 0;
        return dp[n][lastchosen] = solve(n - 1, 0, temp);
    } else {
        temp[n] = 0;
        int ans1 = solve(n - 1, 0, temp);
        dbg_out(temp);
        temp[n] = 1;
        dbg_out(temp);
        int ans2 = solve(n - 1, 1, temp);
        return dp[n][lastchosen] = ans1 + ans2;
    }
}

int findIntegers(int n) {
    s.clear();
    int bits = floor(log2(n)) + 1;
    N = bits;
    memset(dp, -1, sizeof(dp));
    vector<int> temp(N + 1);
    int tempans = solve(N, -1, temp);
//    for(auto ele:s){
//        cout<<ele<<endl;
//    }
    return s.size();
}


int main() {
    f_io();
    int n;
    cin >> n;
    cout << findIntegers(n);
}