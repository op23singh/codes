#include<bits/stdc++.h>
#include <graphics.h>
#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
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
vector<int> adj[200005];
ll parent[200005];
int main() {
    fio;
    f_io();
    int n, m,a,b;
    cin >> n >> m;
    while(m--){
        cin>>a>>b;
        adj[a].pb(b);
        parent[b]=a;
    }
}