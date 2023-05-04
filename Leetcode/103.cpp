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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        int level = 0;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int size = q.size();
            while(size--){
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            if(level%2!=0){
                reverse(temp.begin(),temp.end());
            }
            level++;
            result.push_back(temp);
        }
        return result;
    }
};