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
    int n = prices.size(), i = 1, sd = -1, bd = 0;
    while (i < n) {
        if (prices[i] >= prices[i - 1]) {
            bd = i - 1;
            i++;
            continue;
        }
        i++;
    }
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)cin >> a[i];
    maxProfit(a);
}