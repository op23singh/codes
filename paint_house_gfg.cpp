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

// 0 represents red
//1 represents blue;
//2 represents green
int dp[1001][3];

int solve(vector<vector<int>> &v, int n, int lastcolorchosen) {
    if (n >= v.size())return 0;
    if (lastcolorchosen != -1 and dp[n][lastcolorchosen] != -1)return dp[n][lastcolorchosen];
    else {
        if (lastcolorchosen == 2) {
            return dp[n][lastcolorchosen] = min(v[n][0] + solve(v, n + 1, 0), v[n][1] + solve(v, n + 1, 1));
        } else if (lastcolorchosen == 0) {
            return dp[n][lastcolorchosen] = min(v[n][1] + solve(v, n + 1, 1), v[n][2] + solve(v, n + 1, 2));
        } else if (lastcolorchosen == 1)
            return dp[n][lastcolorchosen] = min(v[n][2] + solve(v, n + 1, 2), v[n][0] + solve(v, n + 1, 0));
        else {
            return dp[n][lastcolorchosen] = min(
                    {v[n][0] + solve(v, n + 1, 0), v[n][1] + solve(v, n + 1, 1), v[n][2] + solve(v, n + 1, 2)});
        }
    }
}

int solve2(vector<vector<int>> &v) {
    int n = v.size();
    dp[0][0] = v[0][0];
    dp[0][1] = v[0][1];
    dp[0][2] = v[0][2];
    for (int i = 1; i < n; i++) {
        dp[i][0] = v[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = v[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = v[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
    }
    return min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }
    cout << solve2(v);
//    memset(dp,-1,sizeof(dp));
//    cout << solve(v, 0, -1);
}