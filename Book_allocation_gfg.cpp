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

bool check(int a[], int n, int target, int k) {
    int sum = 0, student = 1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum > target) {
            sum = a[i];
            if (sum > target)// condition one usually forgets to write if the current element is greater than target which is mid in this case
                return false;
            student++;
            if (student > k)return false;
        }
    }
    return true;
}

int findPages(int a[], int n, int m) {
    int start = 0;
    int end = accumulate(a, a + n, 0);
    int res = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (check(a, n, mid, m))res = mid, end = mid - 1;
        else start = mid + 1;
    }
    return res;
}

int main() {
    fio;
//    f_io();
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n)cin >> a[i];
    cout << findPages(a, n, k);
}
