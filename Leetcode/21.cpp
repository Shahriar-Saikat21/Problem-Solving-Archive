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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* s1 = list1;
        ListNode* s2 = list2;
        ListNode* temp = result;

        if(s1==NULL && s2!=NULL)return s2;

        if(s1!=NULL && s2==NULL) return s1;

        while(s1!=NULL && s2!=NULL){
            if(s1->val <= s2->val){
                temp->next = s1;
                s1 = s1->next;
            }else{
                temp->next = s2;
                s2 = s2->next;
            }
            temp = temp->next;
        }
        if(s1!=NULL) temp->next = s1;
        if(s2!=NULL) temp->next = s2;
        return result->next;
};