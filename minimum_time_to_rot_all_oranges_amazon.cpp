//problem link
// https://www.geeksforgeeks.org/minimum-time-required-so-that-all-oranges-become-rotten/
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

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int N, M;

bool isValid(vector<vector<int>> &v, int x, int y) {
    if (x >= N or x < 0 or y < 0 or y >= M or v[x][y]==2 or v[x][y] == 0)return false;
    else return true;
}

int bfs(vector<vector<int>> &v, queue<tuple<int, int, int>> q) {
    int tt = 0;
    while (!q.empty()) {
        auto ele = q.front();
        q.pop();
        int x = get<0>(ele);
        int y = get<1>(ele);
        int time = get<2>(ele);
        for (int i = 0; i < 4; i++) {
            int newx = x + dx[i];
            int newy = y + dy[i];
            if (isValid(v, newx, newy)) {
                q.push({newx, newy, time + 1});
                v[newx][newy] = 2;
                tt=time+1;
            }
        }
    }
    return tt;
}

int orangesRotting(vector<vector<int>> &v) {
    queue<tuple<int, int, int> > q;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (v[i][j] == 2) {
                q.push({i, j, 0});
            }
        }
    }
    int ans = bfs(v, q),cntone=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cntone+=(v[i][j]==1);
    if(cntone>0)return -1;
    else return ans;
}

int main() {
    fio;
    f_io();

    cin >> N >> M;
    vector<vector<int> > v(N, vector<int>(M, 0));
    rep(i, N)rep(j, M)cin >> v[i][j];
   cout<< orangesRotting(v);
}