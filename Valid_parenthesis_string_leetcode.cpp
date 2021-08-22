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

void print_array(ll a[], ll n) {
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
}

ll power(long long x, unsigned int y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int dp[101][101];

bool solve(string &s, int n, int ans) {
    if (n == s.size() and ans == 0) {
        return true;
    } else if (n == s.size() and ans != 0 or n > s.size() or ans < 0)return false;
    if (dp[n][ans] != -1)return dp[n][ans];
    if (s[n] == '(') {
        dp[n][ans] = solve(s, n + 1, ans + 1);
    } else if (s[n] == ')') {
        if (ans <= 0)return false;
        dp[n][ans] = solve(s, n + 1, ans - 1);
    } else {
        dp[n][ans] = (solve(s, n + 1, ans + 1) or
                      ((ans > 0) ? solve(s, n + 1, ans - 1) : 0) or
                      solve(s, n + 1, ans));
    }
    return dp[n][ans];
}

bool checkValidString(string s) {
    memset(dp, -1, sizeof(dp));
    return solve(s, 0, 0);
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout << checkValidString(s);
}