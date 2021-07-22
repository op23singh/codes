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
//bool final_check(int target ,vector<int> &weights,int maxdays){
//    int i = 0, j = 0,sum=0;
//    int n=weights.size();
//    while (j < n) {
//        sum+=weights[j];
//        if(sum<target){
//            j++;
//            continue;
//        }
//        else if(sum==target){
//            return true;
//        }
//        else if(sum>target){
//            sum-=weights[i];
//            i++;
//            j++;
//            continue;
//        }
//    }
//    return false;
//}
bool check(int target, vector<int> &weights, int maxdays) {
    int sum = 0, n = weights.size(), days = 1;
    for (int i = 0; i < n; i++) {
        sum += weights[i];
        if (sum > target) {
            sum = weights[i];
            days++;
            if (days > maxdays)return false;
        }
    }
    return true;
}

int splitArray(vector<int>& nums, int m) {
        int end = accumulate(nums.begin(), nums.end(), 0);
   int start = *max_element(nums.begin(),nums.end()), res = 0,temp=end;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (check(mid, nums, m))res = mid, end = mid - 1;
        else start = mid + 1;
    }
    return res;
}
int main() {
    fio;
    f_io();
    int n, D;
    cin >> n >> D;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)cin >> a[i];
    cout << splitArray(a, D);
}