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
    int n, ans = 0;
    cin >> n;
    char arr[] = {'R', 'G', 'B'};
    string s;
    cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            for (char j : arr) {
                if (i + 1 < n and j != s[i] and j != s[i + 1]) {
                    ans++;
                    s[i] = j;
                    break;
                } else if ((i + 1) == n && s[i] == s[i - 1]) {
                    if (j != s[i]) {
                        ans++;
                        s[i] = j;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    cout << s << endl;
}