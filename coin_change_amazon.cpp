//problem link
// https://practice.geeksforgeeks.org/problems/coin-change2448/1
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
    int n,m;
    cin>>n>>m;
    int a[m];
    rep(i,m)cin>>a[i];
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=0;i<m;i++){
        for(int j=1;j<=n;j++){
            if(j>=a[i])
                dp[j]+=dp[j-a[i]];
        }
    }
    cout<<dp[n];
}