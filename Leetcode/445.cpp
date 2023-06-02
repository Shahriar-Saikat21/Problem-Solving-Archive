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
        stack<int> s1,s2;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        ListNode* head=new ListNode();
        int sum=0;
        while(!s1.empty() || !s2.empty()){
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum+=s2.top();;
                s2.pop();
            }
            head->val=sum%10;
            ListNode* dummy=new ListNode(sum/10);
            dummy->next=head;
            head=dummy;
            sum/=10;
        }
        return head->val==0?  head->next : head; 
    }
};