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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildRec(nums, 0, nums.size() - 1);
    }


    TreeNode* buildRec(vector<int>& nums, int l, int r) {

        if (l > r) {
            return NULL;
        }
        if (l == r) {
            return new TreeNode(nums[l]);
        }

        int maxInd = -1;
        int maxNum = -1;
        for (int i = l; i < r+1 ; i++) {
            if (nums[i] > maxNum) {
                maxNum = nums[i];
                maxInd = i;
            }
        }
        TreeNode* root = new TreeNode(maxNum);
        root->left = buildRec(nums, l, maxInd - 1);
        root->right = buildRec(nums, maxInd + 1, r);

        return root;
    }

    
};