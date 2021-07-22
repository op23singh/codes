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

int findMaxLen(string &s) {
    int cnt = 0, index = -1, ma = 0;
    stack<int> st;
    st.push(-1);//base case for first closing bracket
    int i = 0, n = s.size();
    while (i < n) {
        if(s[i]=='(')st.push(i);
        else if(!st.empty() and s[i]==')')st.pop();
        if(!st.empty())ma=max(ma,i-st.top());
        else st.push(i);// it is for maintaing the length
        i++;
    }
    return ma;
}

int main() {
    fio;
    f_io();
    string s;
    cin >> s;
    cout << findMaxLen(s);
}