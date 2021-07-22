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
string s,temp;
ll N;
void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
ll dp[1001][1001];
string longestPalindrome(string s) {
    int n=s.size(),ans=0;
    int start=-1,end=-1;
    vector<vector<bool> > v(n,vector<bool> (n));
    for (int diagonal = 0; diagonal < n; diagonal++) {
        for (int row = 0, column = diagonal; column < n; row++, column++) {
            if(diagonal==0)dp[row][column]=1;
            else if(diagonal==1 and s[row]==s[column])dp[row][column]=1;
            else if(s[row]==s[column] and dp[row+1][column-1])dp[row][column]=1;
            if(dp[row][column] and ans<diagonal+1){
                ans=diagonal+1;
                start=row;
                end=column;
            }
        }
    }
    return  s.substr(start,end-start+1);
}
int main() {
    fio;
    f_io();
    cin>>s;
    cout<<longestPalindrome(s);
}