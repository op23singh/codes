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

//     1
//    / \
//  2 ---3
vector<int> adj[10001];
vector<bool> visited(100001);

bool dfs(int src, int parent) {
    visited[src] = 1;
    for (auto ele: adj[src]) {
        if (!visited[ele]) {
            bool z = dfs(ele, src);
            if (z)return true;
        } else if (ele != parent)return true;
    }
    return false;
}

int main() {
    fio;
    f_io();
    int n, m, x, y;
    cin >> n >> m;
    while (m--) {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    cout << dfs(0, -1);
}