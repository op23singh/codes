#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define inf 1e18
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 1000000007
#define vii vector<int>
#define e 0b01110100011101000111010001110100
#define fio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll N;
ll a[10005], b[10005];
ll dp[10005][10005];

void print_array(ll a[], ll n) {
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
}

template<typename K, typename V>
void print_umap(std::unordered_map<K, V> const &m) {
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

template<typename K, typename V>
void print_map(map<K, V> const &m) {
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
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
ll solve(ll n, ll assistant,ll captain) {
    if (n >= N)return 0;
    if(dp[n][assistant]!=-1) return dp[n][assistant];
    if(assistant==N/2){
        return dp[n][assistant]=a[n]+solve(n+1,assistant,captain+1);
    }
    else if(assistant==captain){
        return dp[n][assistant]=b[n]+solve(n+1,assistant+1,captain);
    }
    else return dp[n][assistant]=min(a[n]+solve(n+1,assistant,captain+1),b[n]+solve(n+1,assistant+1,captain));
}

int main() {
    fio;
    f_io();
    memset(dp, -1, sizeof(dp));
    cin >> N;
    rep(i, N)cin >> a[i], cin >> b[i];
    a[0] = inf;
    b[N - 1] = inf;
    cout << solve(0, 0,0);
}