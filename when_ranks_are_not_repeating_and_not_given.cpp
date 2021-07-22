#include<bits/stdc++.h>

using namespace std;

void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

int main() {
    f_io();
    int n, d, d2, sum = 0;
    cin >> n;
    vector<int> r1(n), r2(n), r3(n), r4(n);
    for (int i = 0; i < n; i++) {
        cin >> r1[i] >> r2[i];
        r3[i] = r1[i];
        r4[i] = r2[i];
    }
    sort(r3.begin(), r3.end());
    sort(r4.begin(), r4.end());
    unordered_map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)mp1[r3[i]] = i + 1;
    for (int i = 0; i < n; i++)mp2[r4[i]] = i + 1;

    cout << "x    r1    " << " y     r2    " << "d     " << "d2  " << endl;
    for (int i = 0; i < n; i++) {
        d = mp1[r1[i]] - mp2[r2[i]];
        d2 = d * d;
        sum += d2;
        cout << r1[i] << "    " << mp1[r1[i]] << "   " << r2[i] << "    " << mp2[r2[i]] << "     " << d << "     " << d2
             << "  " << endl;
    }
    double ans2 = n * ((n * n) - 1);
    double ans = 1 - ((6 * sum) / ans2);
    cout << "value of summation d2 = " << sum << endl;
    cout << "value of rho(r) is " << ans;
}