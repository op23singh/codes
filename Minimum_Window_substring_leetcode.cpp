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

string minWindow(string s, string t) {
    int mi = INT_MAX;
    unordered_map<char, int> mp1, mp2;
    for (char &i : t) mp1[i]++;
    int i = 0, j = 0, start = -1, end = -1, cnt = 0, len = 0, n = s.size();
    mp2[s[0]]++;
    if (mp1[s[0]] and mp1[s[0]] >= mp2[s[0]])cnt++;
    while (i <= j and i < n and j < n) {
        if (cnt < t.size() and j < n) {
            j++;
            mp2[s[j]]++;
            if (mp1[s[j]] and mp1[s[j]] >= mp2[s[j]])cnt++;
            continue;
        } else if (cnt >= t.size() and i < n) {
            if (mi > (j - i+1)) {
                mi = j - i +1;
                start = i;
                end = j;
            }
            if (mp1[s[i]] and mp2[s[i]] == 1) {
                cnt--;
                mp2.erase(s[i]);
            } else if (mp2[s[i]] > mp1[s[i]]) {
                mp2[s[i]]--;
            } else if (mp2[s[i]] != 0 and mp2[s[i]] <= mp1[s[i]]) {
                mp2[s[i]]--;
                cnt--;
            }
            i++;
            continue;
        }
    }
    if(cnt==t.size() and mi>(j-i+1)){
        mi=j-i+1;
        start=i;
        end=j;
    }
    string ans;
    if(start>=0 && end>=0){
        for(int i=start;i<=end;i++){
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main() {
    fio;
    f_io();
    string s, t;
    cin >> s >> t;
   cout<< minWindow(s, t);
}