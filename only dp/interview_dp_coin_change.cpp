#include<bits/stdc++.h>

#define ll long long int
#define rep(i, x, n) for(int i=x;i<=n;i++)
using namespace std;

void combination() {
//    or combination
    int n, target;
    cin >> n >> target;
    int coins[n];
    vector<int> dp(target + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= target; j++) {
            if (j >= coins[i])
                dp[j] += dp[j - coins[i]];
        }
    }
}

void permutation() {
    int n, target;
    cin >> n >> target;
    int coins[n];
    vector<int> dp(target + 1, 0);
    for (int j = 1; j <= target; j++) {
        for (int i = 0; i < n; i++) {
            if (coins[i] <= j) {
                dp[j] += dp[j - coins[i]];
            }
        }
    }
}

void patternfinding() {
    //first approach using pattern that is fibonacci numbers
    int n;cin>>n;
    vector<int> dp(n + 1, 0);
    dp[1] = 2;
    dp[2] = 3;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
}

void no_consecutive_ones() {
    int n;
    cin >> n;
    // 0 represents that string ends at zero
    // 1 represents that string ends at one
    vector<vector<int> > dp(n , vector<int>(2, 0));
    dp[0][0]=dp[0][1]=1;
    for(int i=1;i<n;i++){
        dp[i][0]=dp[i-1][0]+dp[i-1][1];
        dp[i][1]=dp[i-1][0];
    }
    cout<<dp[n-1][0]+dp[n-1][1];
}

int main() {
    no_consecutive_ones();
}