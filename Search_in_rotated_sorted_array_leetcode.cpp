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

int get_min(vector<int> &nums) {
    int start = 0, end = nums.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid - 1 >= 0 and mid + 1 < nums.size() and nums[mid - 1] > nums[mid] and nums[mid] < nums[mid + 1]) {
            return mid;
        } else if (nums[mid]>=nums[start] and nums[mid]>=nums[end]){
            start=mid+1;
        } else end=mid-1;
    }
    if(nums[0]<nums[nums.size()-1])return 0;
    else return nums.size()-1;
}

int search(vector<int> &nums, int target) {
   int get_index= get_min(nums);
   cout<<get_index<<endl;
   if(target>=nums[get_index] and target<=nums[nums.size()-1]){
       int x= lower_bound(nums.begin()+get_index,nums.end(),target)-nums.begin();
       if(target==nums[x])return x;
   }
   int x= lower_bound(nums.begin(),nums.begin()+get_index,target)-nums.begin();
    if(nums[x]==target)return x;
    else return -1;
}

int main() {
    fio;
    f_io();
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)cin >> nums[i];
    cout << search(nums, target);
}