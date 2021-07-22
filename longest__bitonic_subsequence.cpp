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
    int n,ma=0;
    cin >> n;
    int a[n];
    vector<int> dplis(n,0);
    vector<int> dplds(n,0);
    for (int i = 0; i < n; i++)cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (a[i] > a[j])
                dplis[i] = max(dplis[j], dplis[i]);
        }
        dplis[i] +=1;
    }
    for (int i = n-1; i >=0; i--) {
        for (int j = i + 1; j<n; j++) {
            if (a[i] > a[j])
                dplds[i] = max(dplds[j], dplds[i]);
        }
        dplds[i] +=1;
    }
    for(int i=0;i<n;i++){
        ma=max(ma,dplds[i]+dplis[i]-1);
    }
    cout<<ma;
}