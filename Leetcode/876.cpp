#include<bits/stdc++.h>

using namespace std;
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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* s = head;
        ListNode* mid = head;
        while(s!=NULL){
            if(s->next==NULL){
                return mid;
            }
            s = s->next->next;
            mid = mid->next;
        }
        return mid;
    }
};