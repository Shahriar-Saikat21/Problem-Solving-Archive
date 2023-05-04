#include<bits/stdc++.h>

using namespace std;

/*
Given the head of a linked list, return the node where the cycle begins. 
If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be 
reached again by continuously following the next pointer. Internally, 
pos is used to denote the index of the node that tail's next pointer 
is connected to (0-indexed). It is -1 if there is no cycle. 
Note that pos is not passed as a parameter.
*/


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // Detect List has any cycle
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast) return true;
        }

        return false;
    }

    // Detect the node where cycle starts
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;   
            if(fast == slow){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast = fast->next;
                }
                return slow;
            }     
        }
        return NULL;
    }
};