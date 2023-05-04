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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,bool>m;
        for(auto x:nums){
            m[x] = true;
        }
        int result = 0, count = 0;
        while(head){
            if(m[head->val]==true){
                count++;
            }else{
                if(count!=0){
                    result++;
                    count = 0;
                }
            }
            head = head->next;
        }
        if(count>0) result++;
        return result;
    }
};