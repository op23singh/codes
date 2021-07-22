#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
vector<int> visited(1001);

void dfs(int src) {
    visited[src] = 1;
    for (auto ele:adj[src]) {
        if (!visited[ele]) {
            dfs(ele);
        }
    }
}

int main() {
    vector<vector<int> > v = {{1, 3},
                              {3, 0, 1},
                              {2},
                              {0}};
//    vector<vector<int> > v = {
//            {1},
//            {2},
//            {3},
//            {0}
//    };
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            adj[i].push_back(v[i][j]);
        }
    }
    dfs(0);
    bool exist = 1;
    for (int i = 0; i < v.size(); i++)
        if (!visited[i]) {
            exist = 0;
            break;
        }
    cout << exist;
}