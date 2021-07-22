#include<bits/stdc++.h>

using namespace std;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

void getAllPaths(vector<vector<int> > &dp) {
    int n = dp.size(), m = dp[0].size();
    queue<tuple<string, int, int> > q;
    q.push({"", n - 1, m - 1});
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        string s = get<0>(curr);
        int x = get<1>(curr);
        int y = get<2>(curr);
        if (x == 0 and y > 0) {
            q.push({s + 'H', x, y - 1});
        } else if (y == 0 and x > 0) {
            q.push({s + 'V', x - 1, y});
        } else if (x == 0 and y == 0) {
            string ans = s;
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            continue;
        } else {
            if (dp[x - 1][y] < dp[x][y - 1]) {
                q.push({s + 'V', x - 1, y});
            } else if (dp[x - 1][y] > dp[x][y - 1]) {
                q.push({s + 'H', x, y - 1});
            } else {
                q.push({s + 'V', x - 1, y});
                q.push({s + 'H', x, y - 1});
            }
        }
    }
}

void getMinpathsum(vector<vector<int> > &v) {
    int n = v.size(), m = v[0].size();
    vector<vector<int> > dp(n, vector<int>(m, 0));
    dp[0][0] = v[0][0];
    for (int i = 1; i < n; i++)dp[i][0] += dp[i - 1][0] + v[i][0];
    for (int i = 1; i < m; i++)dp[0][i] += dp[0][i - 1] + v[0][i];
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = v[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n - 1][m - 1] << endl;
    getAllPaths(dp);
}

int main() {
    f_io();
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin >> v[i][j];
    getMinpathsum(v);
}
