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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        while(temp!=NULL){
            s.push(temp->val);
            temp = temp->next;
        }
        ListNode* t1 = head;
        while(t1!=NULL){
            int r = s.top();
            s.pop();
            if(r != t1->val) return false;
            t1 = t1->next;
        }
        return true;
    }
};