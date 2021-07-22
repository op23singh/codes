#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int value;
    vector<Node> *adj;

    Node() {
        value = 0;
        adj = new vector<Node>();
    }

    Node(int value) {
        this->value = value;
        adj = new vector<Node>();
    }

    Node(int value, vector<Node> &adj) {
        this->value = value;
        this->adj = &adj;
    }
};
unordered_map<Node,Node> visited= new unordered_map<Node,Node> ();
Node cloneGraph(Node *node){
    if(!node)
        return *node;
    else if (visited[node])
        return visited[node];
    Node cloneNode=new Node(node->value,new vector<Node> adj());
    visited[node]=cloneNode;
    for(auto ele:*node->adj){
        cloneNode.adj->push_back(ele);
    }
}
int main() {

}