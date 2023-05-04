#include<bits/stdc++.h>

using namespace std;

/*

Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

 

Example 1:


Input: root = [3,1,4,null,2], k = 1
Output: 1
Example 2:


Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3


*/
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