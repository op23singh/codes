#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define mod 100000007
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

int dpp[1001][1001];
int dpn[1001][1001];

int solve(vector<int> &nums, int n, int target, int sum) {
    if (sum == target && n == (nums.size()))return 1;
    if (n >= nums.size())return 0;
    if (sum < 0) {
        if (dpn[n][abs(sum)] < mod)return dpn[n][abs(sum)];
        else return dpn[n][abs(sum)] = (solve(nums, n + 1, target, sum + nums[n])) + (solve(nums, n + 1, target, sum - nums[n]));
    } else {
        if (dpp[n][sum] < mod)return dpp[n][sum];
        return dpp[n][sum] = (solve(nums, n + 1, target, sum + nums[n])) + (solve(nums, n + 1, target, sum - nums[n]));
    }
}

int main() {
    fio;
    f_io();
    memset(dpn, mod, sizeof(dpn));
    memset(dpp, mod, sizeof(dpp));
    int n, target;
    cin >> n >> target;
    vector<int> a(n, 0);
    rep(i, n)cin >> a[i];
    cout << solve(a, 0, target, 0);
}