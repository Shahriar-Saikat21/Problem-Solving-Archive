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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        ListNode* pre = NULL;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        while(t1!=NULL || t2!=NULL){
            if(t1==NULL){
                int sum = t2->val+carry;
                if(sum>9){
                    carry = 1;
                    sum = sum-10;
                }else carry = 0;
                ListNode* temp = new ListNode(sum);
                pre->next = temp;
                pre = temp;
                t2 = t2->next;
            }else if(t2==NULL){
                int sum = t1->val+carry;
                if(sum>9){
                    carry = 1;
                    sum = sum-10;
                }else carry = 0;
                ListNode* temp = new ListNode(sum);
                pre->next = temp;
                pre = temp;
                t1 = t1->next;
            }else{
                int sum = t1->val + t2->val + carry;
                if(sum>9){
                    carry = 1;
                    sum = sum-10;
                }else carry = 0;
                ListNode* temp = new ListNode(sum);
                if(result==NULL){
                    result = temp;
                    pre = result;
                }else{
                    pre->next = temp;
                    pre = temp;
                }
                t1 = t1->next;
                t2 = t2->next;
            }
        }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            pre->next = temp;
        }
        return result;
    }
};