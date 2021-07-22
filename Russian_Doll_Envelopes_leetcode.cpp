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

int maxEnvelopes(vector<vector<int>> &Envelopes ){
    sort(Envelopes.begin(), Envelopes.end());
    int n = Envelopes.size();
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (Envelopes[i][1] > Envelopes[j][1] && Envelopes[i][0] > Envelopes[j][0]) {
                dp[i] = max(dp[i], dp[j]);
            }
        }
        dp[i] += 1;
    }
    return *max_element(dp.begin(), dp.end());
}

int main() {
    fio;
    f_io();
    int n, a, b;
    cin >> n;
    vector<vector<int> > Envelopes(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 1; j++) {
            cin >> Envelopes[i][j];
        }
    }
    cout << maxEnvelopes(Envelopes);
}