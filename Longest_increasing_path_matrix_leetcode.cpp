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

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int N, M;
int dp[201][201];

int dfs(vector<vector<int> > &matrix, int x, int y) {
    if (dp[x][y] != -1)return dp[x][y];
    int temp = matrix[x][y], ma = 1;
    matrix[x][y] = -1;
    for (int i = 0; i < 4; i++) {
        int newx = dx[i] + x;
        int newy = dy[i] + y;
        if (newx >= 0 and newy >= 0 and newx < N and newy < M and matrix[newx][newy] > temp) {
            ma = max(ma, 1 + dfs(matrix, newx, newy));
        }
    }
    dp[x][y] = ma;
    matrix[x][y] = temp;
    return dp[x][y];
}

int longestIncreasingPath(vector<vector<int>> &matrix) {
    memset(dp, -1, sizeof(dp));
    N = matrix.size();
    M = matrix[0].size();
    int ma = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (dp[i][j] == -1) {
                dfs(matrix, i, j);
                ma = max(ma, dp[i][j]);
            } else ma = max(ma, dp[i][j]);
        }
    }
    return ma;
}

int main() {
    fio;
    f_io();
    vector<vector<int> > matrix;
//    matrix = {{9, 9, 4},
//              {6, 6, 8},
//              {2, 1, 1}};
    matrix = {{0,   1,   2,   3,   4,   5,   6,   7,   8,   9},
              {19,  18,  17,  16,  15,  14,  13,  12,  11,  10},
              {20,  21,  22,  23,  24,  25,  26,  27,  28,  29},
              {39,  38,  37,  36,  35,  34,  33,  32,  31,  30},
              {40,  41,  42,  43,  44,  45,  46,  47,  48,  49},
              {59,  58,  57,  56,  55,  54,  53,  52,  51,  50},
              {60,  61,  62,  63,  64,  65,  66,  67,  68,  69},
              {79,  78,  77,  76,  75,  74,  73,  72,  71,  70},
              {80,  81,  82,  83,  84,  85,  86,  87,  88,  89},
              {99,  98,  97,  96,  95,  94,  93,  92,  91,  90},
              {100, 101, 102, 103, 104, 105, 106, 107, 108, 109},
              {119, 118, 117, 116, 115, 114, 113, 112, 111, 110},
              {120, 121, 122, 123, 124, 125, 126, 127, 128, 129},
              {139, 138, 137, 136, 135, 134, 133, 132, 131, 130},
              {0,   0,   0,   0,   0,   0,   0,   0,   0,   0}};
    cout << longestIncreasingPath(matrix) << endl;
}