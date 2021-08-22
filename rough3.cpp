#include<bits/stdc++.h>

using namespace std;
int N;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void solve(int a[], int n) {
    if (n == N - 1) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    for (int i = n; i < N; i++) {
        swap(a[i], a[n]);
        solve(a, n + 1);
        swap(a[i], a[n]);
    }
}

int main() {
    f_io();
    int n;
    cin >> n;
    N = n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    solve(a, 0);
    return 0;
}