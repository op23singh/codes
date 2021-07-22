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

string solve(string s) {
    int n = s.size();
    int fre[26] = {};
    string result;
    queue<char> q;
    for (int i = 0; i < n; i++) {
        q.push(s[i]);
        fre[s[i] - 'a']++;
        if (fre[q.front() - 'a'] == 1) result.pb(q.front());
        else {
            while (!q.empty() and fre[q.front() - 'a'] > 1) {
                q.pop();
            }
            if (!q.empty())
                result.pb(q.front());
            else result.pb('#');
        }
    }
    return result;
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout << solve(s);
}