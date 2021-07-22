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
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool visited[1001][1001];

bool isValid(int x, int y, vector<vector<int>> &V) {
    if (x >= N or x < 0 or y < 0 or y >= M or visited[x][y] or V[x][y] == 0)return false;
    return true;
}

void countIslands(int x, int y, vector<vector<int>> &v) {
    visited[x][y] = 1;
    for (int k = 0; k < 4; k++) {
        int newx = x + dx[k];
        int newy = y + dy[k];
        if (isValid(newx, newy, v)) {
            countIslands(newx, newy, v);
        }
    }
}

int main() {
    fio;
    f_io();
    int ans = 0;
    cin >> N >> M;
    vector<vector<int>> grid(N, vector<int>(M, 0));
    rep(i, N)rep(j, M)cin >> grid[i][j];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!visited[i][j] and grid[i][j] == 1) {
                countIslands(i, j, grid);
                ans++;
            }
        }
    }
    cout << ans << endl;
}