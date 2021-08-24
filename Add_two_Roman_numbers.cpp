#include<bits/stdc++.h>

using namespace std;


void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}


unordered_map<char, int> mp = {{'L', 50},
                               {'I', 1},
                               {'X', 10},
                               {'C', 100},
                               {'D', 500},
                               {'M', 1000},
                               {'V', 5}};
const int st[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
const string val[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int getDecimal(string s) {
    int ans = 0, i = 0;
    while (i < s.size()) {
        int vl = (i + 1 < s.size()) ? mp[s[i + 1]] : 0;
        if (vl > mp[s[i]]) {
            ans -= mp[s[i]];
        } else ans += mp[s[i]];
        i++;
    }
    return ans;
}

string getRoman(int number) {
    string ans;
    for (int i = 0; i < 13; i++) {
        while ((number - st[i]) >= 0) {
            ans += val[i];
            number = number - st[i];
        }
    }
    return ans;
}

int main() {
    f_io();
    string s1, s2;
    cin >> s1 >> s2;
    cout << getRoman(getDecimal(s1) + getDecimal(s2));
}