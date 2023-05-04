/*
Given a Binary Tree, find the difference between the sum of nodes at odd level 
and the sum of nodes at even level. Consider root as level 1, left and right children 
of root as level 2 and so on. 
For example, in the following tree,sum of nodes at odd level is (5 + 1 + 4 + 8)
which is 18.And sum of nodes at even level is (2 + 6 + 3 + 7 + 9) which is 27. 
The output for following tree should be 18 – 27 which is -9. 

      5
    /   \
   2     6
 /  \     \  
1    4     8
    /     / \ 
   3     7   9 

*/

#include<bits/stdc++.h>

using namespace std;

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

// by bfs traversal
int oddEvenLevelDiff(Tree* root){
    if(root==NULL) return 0;
    int oddSum = 0, evenSum = 0;
    bool odd = true, even = false;
    queue<Tree*> oddQ, evenQ;

    oddQ.push(root);

    while(!oddQ.empty() || !evenQ.empty()){
        if(odd){
            Tree* t1 = oddQ.front();
            oddQ.pop();
            oddSum += t1->value;
            if(t1->left!=NULL) evenQ.push(t1->left);
            if(t1->right!=NULL) evenQ.push(t1->right);

            if(oddQ.empty()){
                odd = false;
                even = true;
            }
        }else if(even){
            Tree* t2 = evenQ.front();
            evenQ.pop();
            evenSum += t2->value;
            if(t2->left!=NULL) oddQ.push(t2->left);
            if(t2->right!=NULL) oddQ.push(t2->right);

            if(evenQ.empty()){
                even = false;
                odd = true;
            }
        }
    }
    return oddSum - evenSum;
}

// by dfs traversal

int diff(Tree* root){
    if(root==NULL) return 0;
    return root->value- diff(root->left) - diff(root->right);
}

int main(){

    Tree* root = NULL;
    root = create(5);
    root->left = create(2);
    root->left->left = create(1);
    root->left->right = create(4);
    root->left->right->left = create(3);
    root->right = create(6);
    root->right->right = create(8);
    root->right->right->left = create(7);
    root->right->right->right = create(9);

    cout<<oddEvenLevelDiff(root)<<endl;
    cout<<diff(root)<<endl;

    return 0;
}