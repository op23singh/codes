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
int maxSum(vector<int>& a, vector<int>& b) {
    int i=0,j=0,sum=0;
    int n=a.size();
    int m=b.size();
    while(i<n && j<m){
        if(a[i]<b[j]){
            sum+=a[i];
            i++;
            continue;
        }
        else if(b[j]<a[i]){
            sum+=b[j];
            j++;
            continue;
        }
        else if(a[i]==b[j]){
            sum+=a[i];
            i++;
            j++;
            continue;
        }
    }
    if(i<n-1 && j==m-1){
        while(i<n){
            sum+=a[i];
            i++;
        }
    }
    else if(i==n-1 && j<m-1){
        while(j<m){
            sum+=b[j];
            j++;
        }
    }
    return sum;
}
int main() {
    fio;
    f_io();
    int n,m;cin>>n>>m;
    vector<int> a(n,0),b(m,0);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    cout<<maxSum(a,b);
}