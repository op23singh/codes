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

int N;
vector<int> adj[200005];
ll dist[200005], parent[200005];

void bfs(int src, int dst) {
    queue<int> q;
    parent[src] = -1;
    q.push(src);
    dist[src] = dst;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto ele:adj[curr]) {
            if (dist[ele] <= 0) {
                q.push(ele);
                parent[ele] = curr;
                dist[ele] = dist[curr] + 1;
            }
        }
    }
}

int main() {
    fio;
    f_io();
    int m;
    cin >> N >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    bfs(1, 1);
    int ansdist = dist[N];
    if (ansdist != 0) {
        int p = N;
        vi v;
        while (p != -1) {
            v.pb(p);
            p = parent[p];
        }
        reverse(v.begin(), v.end());
        cout << dist[N] << endl;
        for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
    } else cout << "IMPOSSIBLE";
}