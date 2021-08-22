#include<bits/stdc++.h>

using namespace std;

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> h) {
    return os << '(' << h.first << ',' << h.second << ')';
}

int get_count(string s, int i, int j) {
    int count = 0;
    while (i >= 0 and j < s.size() and s[i] == s[j]) {
        count++
        i--;
        j++;
    }
    return count;
}
int count_palindromes(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += get_count(s, i, i + 1);
        ans += get_count(s, i, i);
    }
    return ans;
}

int main() {
    string s = "aababcdde";
    auto it = unique(s.begin(), s.end());
    string temp(s.begin(), it);
    int ans = count_palindromes(temp);
    cout << ans << endl;
}