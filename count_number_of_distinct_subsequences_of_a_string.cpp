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
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
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

int countDistinctSubsequences(string s) {
    int n = s.size();
    vector<int> fre(26, -1);
    vector<long long int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        if (fre[s[i] - 'a'] == -1) {
            fre[s[i] - 'a'] = i;
            dp[i + 1] = 2 * dp[i];
        } else {
            dp[i + 1] = 2 * dp[i] - dp[fre[s[i] - 'a']];
            fre[s[i] - 'a'] = i;
        }
    }
    return (dp[n] - 1) % mod;
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout << countDistinctSubsequences(s);
}