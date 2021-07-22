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
ll N, K;
ll a[101];

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

bool solve(ll n, ll k, ll turn) {
    if (n >= N && k == 0)return true;
    else if (n >= N && k != 0)return false;
    else if (a[n] <= k) {
        return solve(n + 1, k - a[n], !turn) and solve(n + 1, k, turn);
    } else return solve(n + 1, k, turn);
}

int main() {
    fio;
    f_io();
    cin >> N >> K;
    rep(i, N)cin >> a[i];
    bool ans = solve(0, K, 0);
    (ans) ? cout << "First\n" : cout << "Second\n";
}