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
bool visited[1001][1001];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
unordered_map<char, pair<int, int> > mp{{'U', {0,  -1}},
                                        {'L', {-1, 0}},
                                        {'D', {0,  1}},
                                        {'R', {1,  0}}};

bool isValid(int x, int y) {
    return true;
}

int bfs(vector<vector<char> > &v) {
    int ans = 0, n = v.size(), m = v[0].size();
    //x y weignt
    deque<tuple<int, int, int> > q;
    q.push_front({0, 0, 0});
    visited[0][0] = 1;
    while (!q.empty()) {
        auto curr = q.front();
        int currx = get<0>(curr);
        int curry = get<1>(curr);
        visited[currx][curry]=1;
        int currcost = get<2>(curr);
        q.pop_front();
        if (currx == n - 1 and curry == m - 1)return currcost;
        for (int i = 0; i < 4; i++) {
            int newx = dx[i] + currx;
            int newy = dy[i] + curry;
            int cost = 0;
            if (newx >= n or newx < 0 or newy < 0 or newy >= m or visited[newx][newy])continue;
            else if (v[currx][curry] == 'U' and dx[i] == -1 and dy[i] == 0)cost = 0;
            else if (v[currx][curry] == 'D' and dx[i] == 1 and dy[i] == 0)cost = 0;
            else if (v[currx][curry] == 'L' and dx[i] == 0 and dy[i] == -1)cost = 0;
            else if (v[currx][curry] == 'R' and dx[i] == 0 and dy[i] == 1)cost = 0;
            else cost = 1;
            if (cost == 1) {
                q.push_back({newx, newy, currcost + cost});
            } else {
                q.push_front({newx, newy, currcost});
            }
        }
    }
}

int main() {
    fio;
    f_io();
    cin >> N >> M;
    vector<vector<char> > v(N, vector<char>(M));
    rep(i, N)rep(j, M)cin >> v[i][j];
    cout << bfs(v);
}