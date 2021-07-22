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
int dp[2005][2005];

bool solve(string source, string target, int n, int m) {
    if (n == N and m == M) return 1;
    if (n > N or m > M)return 0;
    if (dp[n][m] != -1)return dp[n][m];
    else {
        if (source[n] == target[m] or target[m] == '?')return dp[n][m] = solve(source, target, n + 1, m + 1);
        else if (target[m] == '*') {
            return dp[n][m] = (solve(source, target, n + 1, m + 1) || solve(source, target, n, m + 1) ||
                               solve(source, target, n + 1, m));
        } else return 0;
    }

}

bool isMatch(string s, string p) {
    memset(dp, -1, sizeof(dp));
    return solve(s, p, 0, 0);
}

int main() {
    fio;
    f_io();
    string source, target;
    cin >> source >> target;
    N = source.length();
    M = target.length();
    cout << isMatch(source, target) << endl;
}