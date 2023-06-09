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
    bool check(TreeNode* root, long lowerBound, long upperBound){
        if(root==NULL) return true;

        if(root->val <= lowerBound || root->val >= upperBound){
            return false;
        }

        bool left = check(root->left,lowerBound,root->val);
        bool right = check(root->right,root->val,upperBound);
        
        return left && right;
    }

    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN,LONG_MAX);
    }
};