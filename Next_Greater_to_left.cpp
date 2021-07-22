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

vector<int> next_greater_toleft(int a[],int n) {
    stack<int> st;
    vii v;
    v.pb(-1);
    for (int i = 0; i < n; i++) {
        if(!st.empty()) {
            if (st.top() >= a[i])v.pb(st.top());
            else {
                while (!st.empty() and st.top() < a[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    v.pb(-1);
                } else v.pb(st.top());
            }
        }
        st.push(a[i]);
    }
    return v;
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    int a[n];
    rep(i, n)cin >> a[i];
    vector<int> v = next_greater_toleft(a,n);
    rep(i,v.size())cout<<v[i]<<" ";
}