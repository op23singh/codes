/*Legends always come up with solution
  Author: Manvir Singh */

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define fio                          \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL);
#define ll long long int
#define pb push_back
#define INF LONG_MAX
using namespace std;

vector < pair<ll,ll> > tree[100005];

int main(){
    fio;
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,w,i,l,r;
        cin>>n>>l>>r;
        for(i=1;i<=n;i++)tree[i].clear();
        for(i=0;i<-1;i++){
            cin>>x>>y>>w;
            tree[x].pb({y,w});
            tree[y].pb({x,w}); //for undirected graph
        }
        ll dist[n+1];       // for storing minimum distance from root to that node
        for(i=0;i<n;i++)dist[i]=INF;
        priority_queue < pair<ll,ll> ,vector < pair<ll,ll> >,greater< pair<ll,ll> > > q;
        dist[1]=0;              // considering 1 as root
        q.push({0,1});
        while(!q.empty()){
            auto z=q.top();q.pop();
            if(dist[z.second]<z.first)
                continue;
            for (auto &ele:tree[z.second]){
                if(dist[ele.first]>z.first+ele.second){
                    dist[ele.first]=z.first+ele.second;
                    q.push({dist[ele.first],ele.first});
                }
            }
        }

        for(int i=1;i<=n;i++)cout<<dist[i]<<" ";
    }
    return 0;
}
