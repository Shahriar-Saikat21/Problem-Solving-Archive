#include<bits/stdc++.h>

using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        vector<vector<int>>result;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node*curr=q.front();
                temp.push_back(curr->val);
                q.pop();
                int len=curr->children.size();
                for(int i=0;i<len;i++){
                    q.push(curr->children[i]);
                }

            }
            result.push_back(temp);

        }
        return result;
    }
};