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
    bool check(TreeNode* leftRoot,TreeNode* rightRoot){
        if(!leftRoot && !rightRoot) return true;
        if(!leftRoot || !rightRoot || leftRoot->val!=rightRoot->val) return false;
        return check(leftRoot->left,rightRoot->right) && 
                check(leftRoot->right,rightRoot->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return check(root->left,root->right);
    }
};