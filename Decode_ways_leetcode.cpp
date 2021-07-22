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

unordered_map<string, char> mp;

void init() {
    char temp2 = 'A';
    for (int i = 1; i <= 26; i++) {
        mp[to_string(i)] = temp2;
        ++temp2;
    }
    mp[""]=0;
}
int ans=0;
int dp[101];
int solve(string s,string tocheck,int n){
    if(mp.find(tocheck)==mp.end())return 0;
    if(dp[n]!=-1)return dp[n];
    if(n==s.size()) return 1;
    else{
        int ans1=0,ans2=0;
        if(n+1<=s.size())
            ans1=solve(s,s.substr(n,1),n+1);
        if(n+2<=s.size())
            ans2=solve(s,s.substr(n,2),n+2);
        return dp[n]=ans1+ans2;
    }
}
//map< pair<string,string>,int> dp;
//int solve(string s,string tocheck){
//    if(dp.find({s,tocheck})!=dp.end())return dp[{s,tocheck}];
//    if(mp.find(tocheck)==mp.end())return 0;
//    if(s.size()==0) {
//        ans++;
//        return 1;
//    }
//    else{
//        int ans1=0,ans2=0;
//        ans1=solve(s.substr(1),s.substr(0,1));
//        if(s.size()>1)
//            ans2=solve(s.substr(2),s.substr(0,2));
//        return dp[{s,tocheck}]=ans1+ans2;
//    }
//}
int numDecodings(string s) {
    ans=0;
    memset(dp,-1,sizeof(dp));
    init();
    return solve(s,"",0);
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout<<numDecodings(s);
}