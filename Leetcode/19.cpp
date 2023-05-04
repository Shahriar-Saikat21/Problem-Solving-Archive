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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        int size=0;
        ListNode* t = head;
        while(t!=NULL){
            size++;
            t = t->next;
        }

        if(n==size){
            return head->next;
        }

        ListNode* p = head;
        int i=1, index = size-n;
        while(i<index){
            i++;
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
};