#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> mp[26];
    string s;
    cin >> s;
    int count = 0, flag = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' and s[i] <= 'Z') {
            flag = 1;
            continue;
        }
        mp[s[i] - 'a'].push_back(i);
    }
    if (flag != 1) {
        string se;
        for (int i = s.size() - 1; i >= 0; i--)se.push_back(s[i]);
        for (int i = 0; i < se.size(); i++) {
            for (int j = 0; j < mp[se[i] - 'a'].size(); j++) {
                if (mp[se[i] - 'a'][j] == i)count++;
            }
        }
        cout << count << endl;
    } else cout << 0 << endl;
}
