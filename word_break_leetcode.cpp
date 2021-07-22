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

unordered_set<string> se;
int dp[102];
// second method
//class Solution {
//public:
//    unordered_set<string> se;
//    int dp[301][301];
//    bool solve(int start, int end, string &s) {
//        if (start > end or start > (s.size() - 1))return false;
//        if (dp[start][end] != -1)return dp[start][end];
//        if (se.find(s.substr(start, end - start + 1)) != se.end())return dp[start][end] = true;
//        else{
//            for (int k = start; k < end; k++) {
//                dp[start][k] = solve(start, k, s);
//                if(dp[start][k]){
//                    dp[k+1][s.size()-1] = solve(k + 1, s.size() - 1, s);
//                    return dp[start][k] and dp[k+1][s.size()-1];
//                }
//            }
//            return false;
//        }
//    }
//
//    bool wordBreak(string s, vector<string> &wordDict) {
//        int n = s.size();
//        for (string ele:wordDict)se.insert(ele);
//        memset(dp,-1,sizeof(dp));
//        return solve(0, n, s);
//    }
//
//};
bool solve(int start, string &s) {
    if (start == s.size())return true;
    if (start > s.size())return false;
    if (dp[start] != -1)return dp[start];
    else {
        for (int i = start; i < s.size(); i++) {
            dp[start] = se.find(s.substr(start, i - start + 1)) != se.end();
            dp[i + 1] = solve(i + 1, s);
            if (dp[start] and dp[i+1]) {
                return true;
            }
        }
        return false;
    }
}

bool wordBreak(string s, vector<string> &wordDict) {
    int n = s.size();
    for (string ele:wordDict)se.insert(ele);
    memset(dp, -1, sizeof(dp));
    return solve(0, s);
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << wordBreak(s, v);
}