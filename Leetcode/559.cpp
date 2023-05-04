#include<bits/stdc++.h>

using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int dfs(Node* root){
        if(root==NULL) return 0;
        int depth = 0;
        for(auto x: root->children){
            depth = max(depth,dfs(x)+1);
        }
        return depth;
    }

    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        return dfs(root) + 1;
    }
};