#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define inf 1e16
#define vi vector<ll>
#define mod 1000000007
#define vii vector<int>
#define e 0b01110100011101000111010001110100
#define fio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll N;
double a[3001];
double dp[3005][1600];

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

double solve(ll n, ll cntheads) {
    if (cntheads == 0)return 1;
    if (n >= N)return 0;
    if (dp[n][cntheads] > -1)return dp[n][cntheads];
    else return dp[n][cntheads] = ((1 - a[n]) * solve(n + 1, cntheads)) + (a[n] * solve(n + 1, cntheads - 1));
}

int main() {
    fio;
    f_io();
    cin >> N;
    rep(i, N)cin >> a[i];
    memset(dp, -1, sizeof(dp));
    cout << fixed << setprecision(20) << solve(0, (N + 1) / 2);
}