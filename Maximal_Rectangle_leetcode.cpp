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

vector<int> nsr(vector<int> &a) {
    int n = a.size();
    stack<pair<int, int> > st;
    vii v;
    v.pb(a.size());
    for (int i = n - 1; i >= 0; i--) {
        if (!st.empty()) {
            if (st.top().first < a[i]) {
                v.pb(st.top().second);
            } else {
                while (!st.empty() and st.top().first >= a[i]) {
                    st.pop();
                }
                if (st.empty())v.pb(a.size());
                else v.pb(st.top().second);
            }
        }
        st.push({a[i], i});
    }

    reverse(v.begin(), v.end());
    return v;
}

vector<int> nsl(vector<int> &a) {
    int n = a.size();
    stack<pair<int, int> > st;
    vii v;
    v.pb(-1);
    for (int i = 0; i < n; i++) {
        if (!st.empty()) {
            if (st.top().first < a[i]) {
                v.pb(st.top().second);
            } else {
                while (!st.empty() and st.top().first >= a[i]) {
                    st.pop();
                }
                if (st.empty())v.pb(-1);
                else v.pb(st.top().second);
            }
        }
        st.push({a[i], i});
    }
    return v;
}

int largestRectangleArea(vector<int> &v) {
    vector<int> nsmr = nsr(v);
    vector<int> nsml = nsl(v);
    int ma = 0;
    for (int i = 0; i < v.size(); i++) {
        ma = max(ma, v[i] * abs(nsmr[i] - nsml[i] - 1));
    }
    return ma;
}

int maximalRectangle(vector<vector<char>> &matrix) {
    vii newv;
    int n = matrix.size(), m = matrix[0].size();
    vector <  vector<int> >v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '0')v[i][j] = 0;
            else v[i][j] = 1;
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] != 0) {
                v[i][j] += v[i - 1][j];
            } else v[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        vii z(v[i].begin(), v[i].end());
        newv.pb(largestRectangleArea(z));
    }
    return *max_element(newv.begin(), newv.end());
}

int main() {
    fio;
    f_io();
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    rep(i, n)rep(j, m)cin >> v[i][j];
cout<<maximalRectangle(v);
}