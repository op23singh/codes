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

vector<int> factorize(int n) {
    vector<int> v;
    int i = 1;
    while (i * i <= n) {
        if (n % i == 0) {
            v.push_back(i);
            if ((n / i) != i)v.push_back(n / i);
        }
        i++;
    }
    return v;
}
bool ans1,ans2;
bool solve(int num, vector<int> &v,int turn) {
    if (num < 0)return false;
    if (num == 0)return true;
    else if (turn == 0) {
        for (int i = 0; i < v.size(); i++) {
            ans1= solve(num - v[i], v, 1) || solve(num, v, 0);
        }
    } else {
        for(int i=0;i<v.size();i++) {
            ans2=solve( num - v[i], v, 0) & solve( num, v, 1);
        }
    }
    return ans1|ans2;
}

bool divisorGame(int n) {
    vector<int> v = factorize(n);
    return solve(n,v,0);
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    cout << divisorGame(n);
}