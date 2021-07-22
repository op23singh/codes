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

int movesToMakeZigzag(vector<int> &nums) {
    int n = nums.size(), ans = 0, ans2 = 0;
    int prev = nums[0];
    for (int i = 0; i < n; i += 2) {
        int f = 0;
        if (i - 1 >= 0 and prev >= nums[i]) {
            ans += prev - nums[i] + 1;
        }
        if (i + 1 < n and nums[i + 1] >= nums[i]) {
            f = 1;
            ans += nums[i + 1] - nums[i] + 1;
            prev = nums[i + 1] - (nums[i + 1] - nums[i] + 1);//update previous result;
        }
        if (f == 0 and i + 1 < n)prev = nums[i + 1];
    }
    prev = nums[0];
    for (int i = 1; i < n; i += 2) {
        int f = 0;
        if (nums[i] <= prev) {
            ans2 += prev - nums[i] + 1;
        }
        if (i + 1 < n and nums[i + 1] >= nums[i]) {
            f = 1;
            ans2 += nums[i + 1] - nums[i] + 1;
            prev = nums[i + 1] - (nums[i + 1] - nums[i] + 1);//update previous result
        }
        if (f == 0 and i + 1 < n)prev = nums[i + 1];
    }
    return min(ans, ans2);
}

int main() {
    fio;
    f_io();
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    rep(i, n)cin >> nums[i];
    cout << movesToMakeZigzag(nums);
}