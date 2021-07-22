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
vector<ll> adj[200005];
vector<bool> visited(200005);
int lastreached = 1;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

void dfs(int src) {
    visited[src] = 1;
//    cout<<src<<endl;
    for (int ele :adj[src]) {
        if (!visited[ele]) {
            lastreached = ele;
            dfs(ele);
        }
    }
}

int main() {
    fio;
    f_io();
    int n, m, a, b;
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<pair<int, int> > v;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (lastreached != -1 and lastreached != i)v.pb({lastreached, i});
            dfs(i);
        }
    }
    cout << v.size() << endl;
    for (auto ele :v) {
        cout << ele.first << ' ' << ele.second << endl;
    }
}