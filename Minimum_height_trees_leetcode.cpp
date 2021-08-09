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


//vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges) {
//    vector<int> ans;
//    for (int i = 0; i < n - 1; i++) {
//        adj[edges[i][0]].push_back(edges[i][1]);
//        adj[edges[i][1]].push_back(edges[i][0]);
//    }
//    dbg_out(adj[0], adj[1], adj[2], adj[3]);
//    int curmin = INT_MAX;
//    for (int i = 0; i < n; i++) {
//        vector<bool> visited(20001);
//        queue<int> q;
//        int height = 0;
//        q.push(i);
//        q.push(-1);
//        while (!q.empty()) {
//            int current = q.front();
//            q.pop();
//            if (current == -1) {
//                q.push(-1);
//                while (!q.empty() and q.front() == -1)q.pop();
//                height++;
//            } else {
//                visited[current] = 1;
//                for (int ele:adj[current]) {
//                    if (!visited[ele]) {
//                        visited[ele] = 1;
//                        q.push(ele);
//                    }
//                }
//            }
//        }
//        if (curmin > height) {
//            curmin = height;
//            ans.clear();
//            ans.push_back(i);
//        } else if (curmin == height) {
//            ans.push_back(i);
//        }
//    }
//    return ans;
//}
vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges) {
    vector<int> adj[20001];
    int indegree[20001];
    for (int i = 0; i < n - 1; i++) {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
        indegree[edges[i][0]]++;
        indegree[edges[i][1]]++;
    }
    queue<int> q;
    int tempn = n - 1;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 1)q.push(i);
    }
    while (tempn > 2) {
        int tempsize = q.size();
        tempn -= tempsize;
        for (int k = 0; k < tempsize and q.size() > 0; k++) {
            int current = q.front();
            q.pop();
            for (int ele:adj[current]) {
                indegree[ele]--;
                if (indegree[ele] == 1) {
                    q.push(ele);
                }
            }
        }
    }
    vector<int> ans;
    while (!q.empty())ans.push_back(q.front()), q.pop();
    return ans;
}


int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<vector<int> > edges(n, vector<int>(2, 0));
    for (int i = 0; i < n - 1; i++)
        cin >> edges[i][0] >> edges[i][1];
    vector<int> ans = findMinHeightTrees(n, edges);
    for (int i = 0; i < ans.size(); i++)cout << ans[i] << " ";
}