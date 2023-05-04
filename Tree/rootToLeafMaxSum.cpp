#include<bits/stdc++.h>

using namespace std;

/*

        2
      /   \
     5     9
   /  \     \
  4    6     7

  root to leaf max from 2+5+4 , 2+5+6, 2+9+7
  sum of leaf 4+6+7  
*/



typedef struct tree{
    int value;
    tree* left;
    tree* right;
}Tree;

Tree* create(int x){
    Tree* temp = new Tree();
    temp->value = x;
    temp->left = temp->right = NULL;
}

int rootToLeafMaxSum(Tree* root){
    if(root==NULL) return INT_MIN;
    if(root->left==NULL && root->right==NULL) return root->value;

    int leftSum = rootToLeafMaxSum(root->left);
    int rightSum = rootToLeafMaxSum(root->right);

    return max(root->value+leftSum,root->value+rightSum);
}

int sumOFLeafNode(Tree* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->value;

    return sumOFLeafNode(root->left)+sumOFLeafNode(root->right);
}

int main(){

    Tree* root = NULL;
    root = create(2);
    root->left = create(5);
    root->left->left = create(4);
    root->left->right = create(6);
    root->right = create(9);
    root->right->right = create(7);

    cout<<rootToLeafMaxSum(root)<<endl;

    cout<<sumOFLeafNode(root)<<endl;

    return 0;
}