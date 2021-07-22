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

int kadane(vector<int> &v) {
    int n = v.size(), sum = 0, msf = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum < 0) sum = 0;
        msf = max(sum, msf);
    }
    return msf;
}

int main() {
    fio;
    f_io();
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    vector<int> maxpre(n, 0), maxsuff(n, 0);
    rep(i, n)cin >> a[i];
    int result1 = accumulate(a.begin(), a.end(), 0);
    int result2 = ((result1 * k)) % mod;
    maxpre[0] = a[0];
    maxsuff[n - 1] = a[n - 1];
    int ma = kadane(a);
    for (int i = 1; i < n; i++) {
        maxpre[i] += maxpre[i - 1] + a[i];
    }
    for (int i = n - 2; i >= 0; i--) {
        maxsuff[i] += maxsuff[i + 1] + a[i];
    }
    int ma3 = *max_element(maxpre.begin(), maxpre.end()) + (*max_element(maxsuff.begin(), maxsuff.end()));
    ma3 = (ma3 % mod + (result1 * (k - 2)) % mod) % mod;
    cout << max({ma3, ma, result2});
}