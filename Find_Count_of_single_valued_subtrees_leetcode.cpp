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

template<typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }

template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void print_array(ll a[], ll n) {
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
}


void f_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
int cont=0;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : left(nullptr), right(nullptr), val(0) {};

    TreeNode(int x) : left(nullptr), right(nullptr), val(x) {};
};
//TreeNode* solve(TreeNode* root){
//    if(root==NULL)return root;
//    if(root->left==NULL and root->right==NULL){
//        cont++;
//        return root;
//    }
//    root->right=solve(root->right);
//    root->left=solve(root->left);
//    if((!root->left and !root->right and root->left->val==root->right->val and root->val==root->left->val)
//    or (!root->left and root->right!=NULL and root->right->val==root->val)
//    or (root->left!=NULL and !root->right and root->left->val==root->val)){
//        cont++;
//        return root;
//    }
//        root->val=10000;
//        return root;
//}
int solve(TreeNode* root){
    if(root==nullptr){
        return INT_MIN;
    }
    if(root->left==nullptr and root->right==nullptr){
        cont++;
        return root->val;
    }
    int right=solve(root->right);
    int left=solve(root->left);
    if(right==INT_MIN and left==root->val or left==INT_MIN and right==root->val or left==right and left==root->val ){
        cont++;
        return root->val;
    }
    return INT_MAX;
}
int countSubtrees(TreeNode *root){
     solve(root);
    return cont;
}
int main() {
    fio;
    f_io();
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(5);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(5);
    root->left->right=new TreeNode(5);
//    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(5);
//    root->left->left->left = new TreeNode(4);
//    root->right->left->left = new TreeNode(5);
//    root->right->left->right = new TreeNode(5);
//    root->right->right->right = new TreeNode(7);
    cout<<countSubtrees(root);
}
