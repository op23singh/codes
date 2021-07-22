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

int N;

void solve(int n, int open, int closed, string s) {
    if (closed > open || open > N){
        return;
    }
    if (n >= (N * 2)) {
        cout << s << endl;
        return;
    } else {
        solve(n + 1, open + 1, closed, s + '(');
        if (open > N) {
            s.pop_back();
            --open;
        }
        solve(n + 1, open, closed + 1, s + ')');
        if (closed > N) {
            --closed;
            s.pop_back();
        }
    }
}

int main() {
    fio;
    f_io();
    cin >> N;
    solve(0, 0, 0, "");
}