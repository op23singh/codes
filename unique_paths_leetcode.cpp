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
int N, M;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int main() {
    fio;
    f_io();
    cin >> N >> M;
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    for (int i = 0; i <= N; i++)dp[i][0] = 1;
    for (int i = 0; i <= M; i++)dp[0][i] = 1;
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[N - 1][M - 1];
}