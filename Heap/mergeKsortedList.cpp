#include<bits/stdc++.h>

using namespace std;

/*You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
Example 2:

Input: lists = []
Output: []
Example 3:

Input: lists = [[]]
Output: []
*/
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>qmin;

        int n = lists.size();
        if(n==0) return NULL;

        for(int i=0; i<n; i++){
            ListNode* temp = lists[i];
            while(temp!=NULL){
                qmin.push(temp->val);
                temp = temp->next;
            }
        }

        if(qmin.size()==0) return NULL;

        ListNode* result = new ListNode();
        ListNode* s = result;

        while(!qmin.empty()){
            s->next = new ListNode(qmin.top());
            qmin.pop();
            s = s->next;
        }
        return result->next;

    }
};