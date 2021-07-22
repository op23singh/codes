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

int maxProduct(vector<int> &a) {
    int n = a.size();
    int j = 0, prod = 1, ma = INT_MIN;
    while (j < n) {
        prod *= a[j];
        ma = max(ma, prod);
        if (prod > 0) {
            j++;
            continue;
        } else if (prod == 0 and j + 1 < n) {
            prod = 1;
            j++;
            continue;
        } else {
            j++;
            int temp = 1;
            int u = j;
            while (prod < 0 and j < n and a[j] != 0) {
                temp *= a[j];
                prod *= a[j];
                j++;
            }
            if (u != j)
                ma = max({ma, prod, temp});
            if (j < n and a[j] == 0 or prod == 0)continue;
            if (prod > 0 and j < n) {
                continue;
            }
        }
    }
    prod = 1;
    j = n - 1;
    int ma2 = INT_MIN;
    while (j >= 0) {
        prod *= a[j];
        ma2 = max(ma2, prod);
        if (prod > 0) {
            j--;
            continue;
        } else if (prod == 0 and j - 1 >= 0) {
            prod = 1;
            j--;
            continue;
        } else {
            int temp = 1;
            j--;
            int u = j;
            while (prod < 0 and j >= 0 and a[j] != 0) {
                temp *= a[j];
                prod *= a[j];
                j--;
            }
            if (u != j)
                ma2 = max({ma2, prod, temp});
            if (j >= 0 and prod == 0 || a[j] == 0)continue;
            if (prod > 0 and j >= 0) {
                continue;
            }
        }
    }
    return max({ma, *max_element(a.begin(), a.end()), ma2});
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)cin >> nums[i];

}