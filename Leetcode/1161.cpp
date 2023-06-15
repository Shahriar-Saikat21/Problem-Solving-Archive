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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;

        int level = 1,ans = -1;

        int maxSum = INT_MIN;

        q.push(root);

        while(!q.empty()){
            int temp = 0;
            int size = q.size();
            for(int i = 0; i<size; i++){
                TreeNode* n = q.front();
                q.pop();
                temp+= n->val;
                if(n->left){
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
            }

            if(temp>maxSum){
                ans = level;
                maxSum = temp;
            }
            level++;
        }
        return ans;
    }
};