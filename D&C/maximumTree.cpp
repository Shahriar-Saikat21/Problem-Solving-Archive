#include<bits/stdc++.h>

using namespace std;

/*
You are given an integer array nums with no duplicates. A maximum binary tree can be built 
recursively from nums using the following algorithm:

Create a root node whose value is the maximum value in nums.
Recursively build the left subtree on the subarray prefix to the left of the maximum value.
Recursively build the right subtree on the subarray suffix to the right of the maximum value.
Return the maximum binary tree built from nums.

 

Example 1:


Input: nums = [3,2,1,6,0,5]
Output: [6,3,5,null,2,0,null,null,1]
Explanation: The recursive calls are as follow:
- The largest value in [3,2,1,6,0,5] is 6. Left prefix is [3,2,1] and right suffix is [0,5].
    - The largest value in [3,2,1] is 3. Left prefix is [] and right suffix is [2,1].
        - Empty array, so no child.
        - The largest value in [2,1] is 2. Left prefix is [] and right suffix is [1].
            - Empty array, so no child.
            - Only one element, so child is a node with value 1.
    - The largest value in [0,5] is 5. Left prefix is [0] and right suffix is [].
        - Only one element, so child is a node with value 0.
        - Empty array, so no child.
Example 2:


Input: nums = [3,2,1]
Output: [3,null,2,null,1]
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