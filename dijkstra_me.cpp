#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define int long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 10000000000000007
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

vector<pair<int, int> > adj[200001];
vector<int> dis(200001, mod);

void dijkstra(int src, int weight) {
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<> > pq;
    pq.push({weight, src});
    dis[src] = weight;
    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();
        if (dis[curr.second] < curr.first)continue;
        for (auto &ele:adj[curr.second]) {
            if (dis[ele.first] > (ele.second + curr.first)) {
                dis[ele.first] = ele.second + curr.first;
                pq.push({dis[ele.first], ele.first});
            }
        }
    }
}

int32_t main() {
    fio;
    f_io();
    int n, m;
    cin >> n >> m;
    while (m--) {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].pb({y, w});
    }
    dijkstra(1, 0);
    for (int i = 1; i <= n; i++)cout << dis[i] << " ";
}