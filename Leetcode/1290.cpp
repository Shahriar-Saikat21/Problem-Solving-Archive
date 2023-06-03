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
    int getDecimalValue(ListNode* head) {
        int decNum = 0;
        int count = 1;
        stack<int> s;
        while(head!=NULL){
            s.push(head->val);
            head = head->next;
        }
        while(!s.empty()){
            int num = s.top();
            s.pop();
            if(count==1 && num==1){
                decNum += count;
                count = 2;
            }else if(count>1 && num==1){
                decNum += count;
                count*=2;
            }else{
                count*=2;
            }
        }
        return decNum;
    }
};