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
int minSubArrayLen(int target, vector<int>& a) {
    long long int sum=0;
    int n=a.size(),i=0,j=0,len=INT_MAX;
    sum+=a[0];
    while(i<=j and i<n and j<n){
        if(sum<target){
            j++;
            if(j>=n)break;
            sum+=a[j];
            continue;
        }
        else if(sum>=target){
            if(len>(j-i+1))len=j-i+1;
            sum-=a[i];
            i++;
            continue;
        }
    }
    if(sum>=target and len>(j-i+1))len=j-i+1;
    if(len!=INT_MAX) return len;
    else return 0;
}
int main() {
    fio;
    f_io();
    int n,target;
    cin>>n>>target;
    vector<int> a(n,0);
    rep(i,n)cin>>a[i];
    cout<<minSubArrayLen(target,a);
}