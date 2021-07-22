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
int solve(vector<int> &v,int n,int sign){
    if(n>=v.size())return 0;
    else if(sign==0){
        if(v[n]-v[n-1]<0){
            return max(1+solve(v,n+1,1),solve(v,n+1,sign));
        }
        else return solve(v,n+1,sign);
    }
    else if(sign==1){
        if(v[n]-v[n-1]>=0){
            return max(1+solve(v,n+1,0),solve(v,n+1,sign));
        }
        else return solve(v,n+1,sign);
    }
    else{
        if(v[n]-v[n-1]<0){
            return max(1+solve(v,n+1,1),solve(v,n+1,sign));
        }
        else
            return max(1+solve(v,n+1,0),solve(v,n+1,sign));
    }
}

int main() {
    fio;
    f_io();
    int n;cin>>n;
    vector<int> a(n,0);
    rep(i,n)cin>>a[i];
    cout<<solve(a,1,-1)+1;
}