#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 1000000007
#define pi pair<int,int>
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

//0=down,1=up,2=left,3=right
string dir="DULR";
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool visited[1002][1002];
int previ[1002][1002];
pair<int, int> src, des;
int N, M;
string ans;

void bfs(vector<vector<char>> &v) {
    queue< pi > q;
    q.push(src);
    while (!q.empty()) {
        pi curr = q.front();q.pop();
        if (curr.first == des.first and curr.second == des.second){break;}
        for (int i = 0; i < 4; i++) {
            pi newpos = {curr.first + dx[i], curr.second + dy[i]};
            int newx = newpos.first;
            int newy = newpos.second;
            if (newx < 0 or newy < 0 or newx >= N or newy >= M or visited[newx][newy] or v[newx][newy] == '#') continue;
            visited[newpos.first][newpos.second]=true;
            previ[newpos.first][newpos.second] = i;
            q.push(newpos);
        }
    }
}

int main() {
    fio;
    f_io();
    cin >> N >> M;
    vector<vector<char> > v(N, vector<char>(M));
    rep(i, N) {
        rep(j, M) {
            cin >> v[i][j];
            if (v[i][j] == 'A')src.first = i, src.second = j;
            if (v[i][j] == 'B')des.first = i, des.second = j;
        }
    }
    visited[src.first][src.second]=true;
    bfs(v);
    string final;
    if (visited[des.first][des.second]) {
        cout << "YES" << endl;
        pi tempdes={des.first,des.second};
        while(tempdes!=src){
            int p=previ[tempdes.first][tempdes.second];
                    final.pb(dir[p]);
                    tempdes={tempdes.first-dx[p],tempdes.second-dy[p]};
        }
        reverse(final.begin(),final.end());
        cout<<final.size()<<endl;
        cout<<final<<endl;
    } else {
        cout << "NO" << endl;
    }
}