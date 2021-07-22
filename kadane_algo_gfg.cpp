#include<bits/stdc++.h>
//#include<execution>
//#include<
//#include <stddef.h>
using namespace std;
int kandane(vector<int> &a, int n) {
    int meh = 0, msf = INT_MIN;
    for (int i = 0; i < n; i++) {
        meh = meh + a[i];
        meh = max(meh, a[i]);
        msf = max(meh, msf);
    }
    return msf;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
//    transform_reduce()
    for (int i = 0; i < n; i++)cin >> a[i];
    sort(a.begin(),a.end());
//    cout<<kandane(a,a.size())<<endl;
}