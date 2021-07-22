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

int main() {
    fio;
    f_io();
    int x;
    int n;cin>>n;
    vector< pair<int,int> > v(n);
    vector<int> dp(n,0);
    rep(i,n)cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(v[i].second>v[j].second){
                dp[i]=max(dp[i],dp[j]);
            }
        }
        dp[i]+=1;
    }
    cout<<*max_element(dp.begin(),dp.end());
}