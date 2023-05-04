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
    void dfs(TreeNode* root, map<int,int>&result){
        if(root!=NULL){
            dfs(root->left,result);
            result[root->val]++;
            dfs(root->right,result);
        }
    }

    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        map<int,int>result;
        dfs(root,result);
        int maxValue = 0;
        for(auto i:result){
            if(i.second>maxValue){
                ans.clear();
                maxValue =i.second;
                ans.push_back(i.first);
            }else if(i.second==maxValue){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};