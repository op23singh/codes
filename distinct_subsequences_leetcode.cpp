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

int N, M, ans = 0;
int dp[1005][1005];

int solve(string s, string t, int n, int m) {
    if (n > N or m > M)return 0;
    if (dp[n][m] != -1)return dp[n][m];
    if (m == M and s[n - 1] == t[m - 1]) return 1;
    else {
        if (s[n] == t[m]) {
            return dp[n][m] = solve(s, t, n + 1, m + 1) + solve(s, t, n + 1, m);
        } else return dp[n][m] = solve(s, t, n + 1, m);
    }
}

int numDistinct(string s, string t) {
    int n = s.size(), m = t.size();
    for (int i = 1; i <= s.size(); i++) {
        for (int j = 1; j <= t.size(); j++) {

        }
    }
}

int main() {
    fio;
    f_io();
    string s, t;
    cin >> s >> t;
    N = s.size();
    M = t.size();
    cout << numDistinct(s, t);
}