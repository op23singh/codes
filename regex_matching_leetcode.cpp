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

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int N, M;

bool isMatch(string s, string p) {
    N = s.size();
    M = p.size();
    bool dp[N + 1][M + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 1; i <= M; i++) {
        if (p[i - 1] == '*') {
            dp[0][i] = dp[0][i - 2];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (s[i - 1] == p[j - 1] or p[j - 1] == '.')dp[i][j] = dp[i - 1][j - 1];
            else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2];
                if (s[i - 1] == p[j - 2] or p[j - 2] == '.') {
                    dp[i][j] = dp[i][j] || dp[i-1][j] || dp[i - 1][j - 2];
                }
            }
        }
    }
//    for (int i = 0; i <= N; i++) {
//        for (int j = 0; j <= M; j++) {
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
    return dp[N][M];
}

int main() {
    fio;
    f_io();
    string source, pattern;
    cin >> source >> pattern;
    cout << isMatch(source, pattern);
}