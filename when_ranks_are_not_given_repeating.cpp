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

void ranks_given(vector<double> &r1, vector<double> &r2, int n) {
    cout << "r1     |    " << "r2       |    " << "d     |    " << "d2     |       " << endl;
    double sum, d, d2;
    for (int i = 0; i < n; i++) {
        d = r1[i] - r2[i];
        d2 = d * d;
        sum += d2;
        cout << r1[i] << "  |       " << r2[i] << "    |       " << d << "  |       " << d2 << "    |       " << endl;
    }
    double ans2 = n * ((n * n) - 1);
    double ans = 1 - ((6 * sum) / ans2);
    cout << "value of summation d2 = " << sum << endl;
    cout << "value of rho(r) is " << ans;
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    double a[n], b[n], r3[n], r4[n];
    unordered_map<double, double> mp1, mp2, mp3, mp4;
    for (int i = 0; i < n; i++)cin >> a[i] >> b[i], mp1[a[i]]++, mp2[b[i]]++, r3[i] = a[i], r4[i] = b[i];
    vii v;
    for (auto ele:mp1) {
        if (ele.second > 1)
            v.push_back(ele.second);
    }
    for (auto ele:mp2) {
        if (ele.second > 1)
            v.push_back(ele.second);
    }
    double tempans = 0;
    for (int i = 0; i < v.size(); i++)tempans += ((v[i] * v[i] * v[i]) - v[i]);
    tempans /= 12;
    sort(r3, r3 + n);
    sort(r4, r4 + n);
    int i = 0;
    while (i < n) {
        int currentrank = i + 1, tobeadded = 0;
        if (mp1[r3[i]] > 1) {
            int crsum = 0, tempe = mp1[r3[i]];
            for (int h = 0; h < mp1[r3[i]]; h++)crsum += (h + i + 1);
            mp3[r3[i]] = crsum / (double) tempe;
            i += tempe;
            continue;
        } else {
            mp3[r3[i]] = i + 1;
            i++;
            continue;
        }
    }
    i = 0;
    while (i < n) {
        int currentrank = i + 1, tobeadded = 0;
        if (mp2[r4[i]] > 1) {
            int crsum = 0, tempe = mp2[r4[i]];
            for (int h = 0; h < mp2[r4[i]]; h++)crsum += (h + i + 1);
            mp4[r4[i]] = crsum / (double) tempe;
            i += tempe;
            continue;
        } else {
            mp4[r4[i]] = i + 1;
            i++;
            continue;
        }
    }
    vector<double> finalrank1(n), finalranks2(n);
    for (int i = 0; i < n; i++)finalrank1[i] = mp3[a[i]];
    for (int i = 0; i < n; i++)finalranks2[i] = mp4[b[i]];
    ranks_given(finalrank1, finalranks2, n);
}