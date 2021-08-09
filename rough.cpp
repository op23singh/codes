#include<bits/stdc++.h>

using namespace std;
vector<int> adj[100001];
vector<bool> visited(100001);
vector<int> ans(100001);

int dfs(int src, vector<bool> &hasTheif) {
    visited[src] = true;
    for (int ele:adj[src]) {
        if (!visited[ele]) {
            int sum = dfs(ele, hasTheif);
            if (hasTheif[ele]) {
                ans[src] += sum + 2;
                hasTheif[src] = 1;
            }
        }
    }
    return ans[src];
}

int minTime(int n, vector<vector<int> > edges, vector<bool> hasTheif) {
    n = edges.size();
    for (int i = 0; i < n; i++) {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    return dfs(0, hasTheif);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > edges(n, vector<int>(2));
    vector<bool> hasTheif(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }
    for (int i = 0; i < n; i++) {
        bool x;
        cin >> x;
        hasTheif[i] = x;
    }
    cout << minTime(n, edges, hasTheif);
}