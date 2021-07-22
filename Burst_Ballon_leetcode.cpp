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
//unordered_set<int> s;
//int getleft(vector<int> &nums,int index){
//    while(index>=0 and s.find(index)!=s.end()){
//        index--;
//    }
//    if(index<0)return 1;
//    return nums[index];
//}
//int getright(vector<int> &nums,int index){
//    while(index<nums.size() and s.find(index)!=s.end()){
//        index++;
//    }
//    if(index>=nums.size())return 1;
//    return nums[index];
//}
//int solve(vector<int> &nums,int n){
//    if(n>=nums.size())return 0;
//    else {
//        int left=(n-1>=0)?getleft(nums,n):1;
//        int right=(n+1<nums.size())? getright(nums,n):1;
//        s.insert(n);
//        int ans1=(left*nums[n]*right)+solve(nums,n+1);
//        s.erase(n);
//        int ans2=solve(nums,n+1);
//        return max(ans1,ans2);
//    }
//}
//bool check(int n){
//    for(int i=0;i<n;i++){
//        if(s.find(i)==s.end())return false;
//    }
//    return true;
//}
//int solve(vector<int> &nums){
//    bool chek=check(nums.size());
//    if(chek)return 0;
//    else{
//        int ans=0;
//        for(int i=0;i<nums.size();i++){
//            if(s.find(i)==s.end()){
//                int left=getleft(nums,i-1);
//                int right=getright(nums,i+1);
//                s.insert(i);
//                ans=max(ans,left*right*nums[i]+solve(nums));
//                s.erase(i);
//            }
//        }
//        return ans;
//    }
//}
int dp[501][501];
int solve(vector<int> &nums,int start,int end){
    if(start>end)return 0;
    if(dp[start][end]!=-1)return dp[start][end];
    else{
        int ans=0;
        for(int k=start;k<=end;k++){
            int temp=solve(nums,start,k-1)+solve(nums,k+1,end);
            temp+=nums[k]*(start-1>=0?nums[start-1]:1)*((end+1<nums.size())?nums[end+1]:1);
            cout<<temp<<endl;
            ans=max(ans,temp);
        }
        return dp[start][end]=ans;
    }
}
int maxCoins(vector<int> &nums) {
    memset(dp,-1,sizeof(dp));
    return solve(nums,0,nums.size()-1);
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)cin >> nums[i];
    cout << maxCoins(nums);
}