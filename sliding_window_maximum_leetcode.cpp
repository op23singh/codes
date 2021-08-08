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

vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    int i = 0, j = 0, n = nums.size();
    deque<int> q;
    vector<int> ans;
    int ma =-100000000;
    while (j < n) {
        while (!q.empty() and q.back() < nums[j])q.pop_back();
        q.push_back(nums[j]);
        ma = max(ma, nums[j]);
        if (j - i + 1 < k) {
            j++;
            continue;
        } else if (j - i + 1 == k) {
            ans.push_back(ma);
            if (ma == nums[i] and !q.empty()){
                q.pop_front();
                if(!q.empty())
                ma = q.front();
                else ma=-100000000;
            }
            j++;
            i++;
            continue;
        }
    }
    return ans;
}

int main() {
    fio;
    f_io();
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)cin >> nums[i];
    vector<int> v = maxSlidingWindow(nums, k);
    for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
}