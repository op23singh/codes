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
int maximalSquare(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int> > dp(n,vector<int> (m,0));
    for(int i=0;i<n;i++)if(matrix[i][0]=='1'-'0')dp[i][0]=1;
    for(int i=0;i<m;i++)if(matrix[0][i]=='1'-'0')dp[0][i]=1;

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]='1'-'0')
                dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    // int ma=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         ma=max(ma,dp[i][j]);
    //       }
    // }
    return 0;
}
int main() {
    fio;
    f_io();
    int n,m;cin>>n>>m;
    vector<vector<char>> v(n,vector<int> (m,'0'));
    rep(i,n)rep(j,m)cin>>v[i][j];
    maximalSquare(v);
}