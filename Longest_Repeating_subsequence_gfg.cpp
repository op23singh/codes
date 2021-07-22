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
    string s;
    cin>>s;
    int n=s.size();
    vector<vector<int> > dp(n+1,vector<int> (n+1,0));
//    for(int i=0;i<n;i++)dp[i][0]=1,dp[0][i]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j and s[i-1]==s[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}