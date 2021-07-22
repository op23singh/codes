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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    int rep, mis;
    for (int i = 0; i < n; i++) {
        if (a[i] != i + 1) {
            swap(a[i], a[a[i] - 1]);
        }
    }
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    for (int i = 0; i < n; i++) {
        if (a[i] != i + 1) {
            rep = a[i];
            mis = i + 1;
        }
    }
}