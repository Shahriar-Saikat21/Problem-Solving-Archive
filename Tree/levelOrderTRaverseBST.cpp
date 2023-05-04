#include<bits/stdc++.h>

using namespace std;
/*
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           int sz=q.size();
           vector<int>v;
           while(sz--){
               TreeNode * f=q.front();
               v.push_back(q.front()->val);
               q.pop();
               if(f->left)q.push(f->left);
               if(f->right)q.push(f->right);

           }
           ans.push_back(v);
        }
        return ans;
    }
};