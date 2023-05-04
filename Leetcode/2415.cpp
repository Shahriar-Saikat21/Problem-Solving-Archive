#include<bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
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
    TreeNode* reverseOddLevels(TreeNode* root) {

        queue<TreeNode*> q;
        vector<int> values;
        q.push(root);
        int level = 0;

        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0;i<size;i++){
                TreeNode* t = q.front();
                q.pop();

                if(level%2!=0){
                    t->val = values[size-i-1];
                }

                if(t->left!=NULL){
                    q.push(t->left);
                    temp.push_back(t->left->val);
                }

                if(t->right!=NULL){
                    q.push(t->right);
                    temp.push_back(t->right->val);
                }
            }
            values = temp;
            level++;
        }
        return root;
    }
};