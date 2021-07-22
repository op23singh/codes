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

vector<ll> adj[100005];
ll indegree[100001];

void bfs(int n) {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    if (!q.empty()) {
        vi v;
        while (!q.empty()) {
            int curr = q.front();
            v.pb(curr);
            q.pop();
            for (int ele:adj[curr]) {
                indegree[ele]--;
                if (indegree[ele] == 0)
                    q.push(ele);
            }
        }
        int flag = 0;
        for (int i = 1; i <= n; i++) {
            if (indegree[i] != 0) {
                cout << "IMPOSSIBLE\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
        }
    } else cout << "IMPOSSIBLE\n";
}

int main() {
    fio;
    f_io();
    ll n, m, a, b;
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        adj[a].pb(b);
        indegree[b]++;
    }
    bfs(n);
}