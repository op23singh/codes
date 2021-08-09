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

//not worked some flaws in the code
//unordered_set<int> se(nums.begin(), nums.end());
//int ma = *max_element(nums.begin(), nums.end());
//vector<int> ans;
//for (int i = 0; i < nums.size(); i++) {
//vector<int> temp;
//for (int j = 1; j * nums[i] <= ma and nums[i] != 1; j++) {
//int tofind = pow(nums[i], j);
//if (se.find(tofind) != se.end()) {
//temp.push_back(tofind);
//}
//}
//if (se.find(1) != se.end())temp.push_back(1);
//if (ans.size() < temp.size())ans = temp;
//}
////    dbg_out(ans);
//return ans;
vector<int> largestDivisibleSubset(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j] == 0) {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
    }
    auto ma = max_element(dp.begin(), dp.end());
    int val = *ma;
    int index = ma - dp.begin();
    vector<int> ans;
    ans.push_back(nums[index]);
    --val;
    int last_ele = nums[index];
    --index;
    while (val > 0 and index >= 0) {
//        cout<<last_ele<<" "<<nums[index]<<" "<<dp[index]<<" "<<val-1<<endl;
        if ((last_ele % nums[index]) == 0 and dp[index] == val) {
            ans.push_back(nums[index]);
            last_ele = nums[index];
            --val;
        }
        --index;
    }
    return ans;
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)cin >> nums[i];
    vector<int> ans = largestDivisibleSubset(nums);

}