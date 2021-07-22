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

int ans = 0;
int dx[5] = {1, -1, 0, 0};
int dy[5] = {0, 0, 1, -1};
int ma = 0;

void dfs(vector<vector<int>> &v, int start, int end,vector<vector<bool>> &visited) {
    visited[start][end]=true;
    for (int i = 0; i < 4; i++) {
        int newx = start + dx[i];
        int newy = end + dy[i];
        if (newx < 0 or newy < 0 or newx >= v.size() or newy >= v[0].size() or v[newx][newy] == 0 or visited[newx][newy])continue;
        ans += v[newx][newy];
        dfs(v, newx, newy,visited);
        ma = max(ma, ans);
        ans -= v[newx][newy];
        visited[newx][newy] = false;
    }
}

int getMaximumGold(vector<vector<int>> &v) {
    ma=0;
    int n = v.size(), m = v[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] != 0) {
                vector< vector<bool> > visited(n,vector<bool> (m,0));
                ans = v[i][j];
                ma=max(ma,ans);
                dfs(v, i, j,visited);
            }
        }
    }
    return ma;
}

int main() {
    fio;
    f_io();
    int t;
        int n, m;
        ma=0;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        cout << getMaximumGold(v) << endl;
}