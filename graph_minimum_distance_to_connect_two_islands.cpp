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

template<typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void print_array(ll a[], ll n) {
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
}

ll power(long long x, unsigned int y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

template<typename T1, typename T2>
class Graph {
public:
    unordered_map<T1, vector<T2>> adj;

    Graph() = default;

    void add_edge(T1 n1, T2 n2, bool bidr = true) {
        adj[n1].pb(n2);
        if (bidr)adj[n2].pb(n2);
    }

    void print() {
        for (auto ele:adj) {
            cout << ele.first << "->";
            for (auto el:ele.second) {
                cout << el << ", ";
            }
            cout << endl;
        }
    }
};

int visited[1001][1001];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int mindist = mod;
queue< tuple<int, int, int> > q;

void bfs(vector<vector<int> > &grid) {
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        int x = get<0>(curr);
        int y = get<1>(curr);
        int currentdistance = get<2>(curr);
        for (int i = 0; i < 4; i++) {
            int newx = x + dx[i];
            int newy = y + dy[i];
            if (newx >= 0 and newx < grid.size() and newy >= 0 and newy < grid[0].size()
                and grid[newx][newy] != 1 and visited[newx][newy] != 1) {
                visited[newx][newy] = 1;
                q.push({newx, newy, currentdistance + 1});
            } else if (newx >= 0 and newx < grid.size() and newy >= 0 and newy < grid[0].size()
                       and grid[newx][newy] == 1 and visited[newx][newy] != 1) {
                visited[newx][newy] = 1;
                mindist = min(currentdistance, mindist);
            }
        }
    }
}

void dfs(int x, int y, vector<vector<int> > &grid) {
    visited[x][y] = 1;
    q.push({x, y, 0});
    for (int i = 0; i < 4; i++) {
        int newx = x + dx[i];
        int newy = y + dy[i];
        if (newx >= 0 and newx < grid.size() and newy >= 0 and newy < grid[0].size()
            and grid[newx][newy] != 0 and visited[newx][newy] != 1) {
            dfs(newx, newy, grid);
        }
    }
    bfs(grid);
}

int main() {
    fio;
    f_io();
//    vector<vector<int> > grid = {{0, 1, 0},
//                                 {0, 0, 0},
//                                 {0, 0, 1}};
    vector<vector<int> > grid = {{1, 1, 1, 1, 1},
                                 {1, 0, 0, 0, 1},
                                 {1, 0, 1, 0, 1},
                                 {1, 0, 0, 0, 1},
                                 {1, 1, 1, 1, 1}};
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                dfs(i, j, grid);
                break;
            }
        }
    }
    cout << mindist;
}