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

vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries) {
    int n = points.size(), m = queries.size();
    vector<int> dp(m, 0);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            int x1 = points[i][0];
            int x2 = queries[j][0];
            int y1 = points[i][1];
            int y2 = queries[j][1];
            double dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            dp[j] += (dis <= (queries[j][2]));
        }
    }
    return dp;
}

int main() {
    fio;
    f_io();
    int n, m;
    cin >> n >> m;
    vector<vector<int> > points(n, vector<int>(2, 0)), queries(m, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 1; j++) {
            cin >> points[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }
    }
    vii v = countPoints(points, queries);
    for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
}