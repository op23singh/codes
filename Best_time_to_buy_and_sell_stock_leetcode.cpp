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

int maxProfit(vector<int> &prices) {
    int n = prices.size();
    int minsf = INT_MAX, ma = 0;
    for (int i = 0; i < n; i++) {
        minsf = min(prices[i], minsf);
        if (i > 0 and prices[i] >= minsf) {
            ma = max(ma, prices[i] - minsf);
        }
    }
    return ma;
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> prices(n, 0);
    rep(i, n)cin >> prices[i];
    cout << maxProfit(prices);
}