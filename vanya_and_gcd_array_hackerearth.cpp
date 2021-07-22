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

ll power(long long x, unsigned int y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

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
    int t=1;
    while (t--) {
        ll n, ans = 0;
        cin >> n;
        ll a[n];
        vector<vector<ll>> dp(n, vector<ll>(101, 0));
        rep(i, n)cin >> a[i];
        dp[0][a[0]] = 1;
        ll sum =dp[0][1];
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (a[i] > a[j]) {
                    for (int gc = 1; gc <= 100; gc++) {
                        ll newgcd = __gcd((ll) gc, a[i]);
                        dp[i][newgcd] = (dp[i][newgcd] + dp[j][gc])%mod;
//                        cout<<dp[i][newgcd]<<" "<<dp[j][gc]<<endl;
                    }
                }
            }
            dp[i][a[i]]+=1;
            sum+=dp[i][1]%mod;
        }

//        for(int y=0;y<n;y++) {
//            for (int h = 0; h <= 100; h++) {
//                cout << dp[y][h] << " ";
//            }
//            cout << endl;
//        }
//        cout<<sum%mod<<endl;
    }
}