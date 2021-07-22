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

int numSub(string s) {
    int n = s.size();
    long long int ans = 0, currentlength = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') currentlength++;
        else {
            ans += (currentlength * (currentlength + 1)) / 2;
            ans += mod;
            ans %= mod;
            currentlength = 0;
        }
    }
    if (currentlength > 0) {
        ans += (currentlength * (currentlength + 1)) / 2;
        ans += mod;
        ans %= mod;
    }
    return ans;
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout << numSub(s);
}