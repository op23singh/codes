// problem link
// https://www.geeksforgeeks.org/the-celebrity-problem/
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

//method 1 O(n2)
//int celebrity(vector<vector<int> >& v, int n) {
//    int indegree[n]={ };
//    int outdegree[n]={ };
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(v[i][j]==1){
//                indegree[j]++;
//                outdegree[i]++;
//            }
//        }
//    }
//    int f=0;
//    for(int i=0;i<n;i++){
//        if(indegree[i]==n-1 and outdegree[i]==0){
//            f=1;
//            return i+1;
//        }
//    }
//    if(f==0)return -1;
//}
//using elimination in which we consider if 1 knows 2 then 1 cannot be a celebrity since celebrity knows nobody
// this implies our approach to the problem and we can further optimise the problem
int N;

bool final_check(vector<vector<int> > &v, int n) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (v[n][i])return false;
        if (v[i][n])cnt++;
    }
    if (cnt != N - 1)return false;
    return true;
}

int celebrity(vector<vector<int> > &v, int n) {
    stack<int> st;
    for (int i = 0; i < n; i++) {
        st.push(i);
    }
    while (st.size() >= 2) {
        int first = st.top();
        st.pop();
        int second = st.top();
        st.pop();
        if (v[first][second]) st.push(second);
        else st.push(first);
    }
    if (final_check(v, st.top()))return st.top();
    else return -1;
}

int main() {
    fio;
    f_io();
    cin >> N;
    vector<vector<int> > v(N, vector<int>(N, 0));
    rep(i, N)rep(j, N)cin >> v[i][j];
    cout << celebrity(v, N);
}