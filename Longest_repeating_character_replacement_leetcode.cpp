#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 1000000007
#define vii vector<int>
#define e 0b01110100011101000111010001110100
#define fio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

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
#define dbg(...) cerr << "(" << #_VA_ARGS_ << "):", dbg_out(_VA_ARGS_)
#else
#define dbg(...)
#endif

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int characterReplacement(string s, int k) {
    string temp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int ma = 0, n = s.size();
    int temp1 = k;
    for (char ch:temp) {
        int j = 0, i = 0, k = temp1;
        while (j < n) {
            if (ch != s[j] and k > 0) {
                k--;
            } else if (k == 0 and ch != s[j]) {
                ma = max(ma, j - i);
                if (s[i] != ch) k++;
                i++;
                continue;
            }
            j++;
        }
        ma = max(ma, j - i);
    }
    return ma;
}

int main() {
    fio;
    f_io();
    int k;
    cin >> k;
    string s;
    cin >> s;
    cout << characterReplacement(s, k);
}