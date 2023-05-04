#include<bits/stdc++.h>

using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void treeTraverse(TreeNode* root,priority_queue<int,vector<int>,greater<int>> &q){
        if(root!=NULL){
            treeTraverse(root->left,q);
            q.push(root->val);
            treeTraverse(root->right,q);
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        treeTraverse(root,q);
        int result = -1;
        for(int i=1;i<=k;i++){
            result = q.top();
            q.pop();
        }
        return result;
    }
};