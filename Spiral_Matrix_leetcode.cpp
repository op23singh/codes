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

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, down = n - 1, right = m - 1, left = 0;
    int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    do {
        flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
        if(top<=down) {
            for (int i = left; i <= right; i++)flag1 = 1, ans.push_back(matrix[top][i]);
            if (flag1)
                top++;
        }
        if(right>=left) {
            for (int i = top; i <= down; i++)flag2 = 1, ans.push_back(matrix[i][right]);
            if (flag2)
                right--;
        }
        if(down>=top) {
            for (int i = right; i >= left; i--)flag3 = 1, ans.push_back(matrix[down][i]);
            if (flag3)
                down--;
        }
        if(left<=right) {
            for (int i = down; i >= top; i--)flag4 = 1, ans.push_back(matrix[i][left]);
            if (flag4)
                left++;
        }
    } while (flag1 or flag2 or flag3 or flag4);
//    dbg_out(ans);
    return ans;
}

int main() {
    fio;
    f_io();
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    }
    spiralOrder(v);
}