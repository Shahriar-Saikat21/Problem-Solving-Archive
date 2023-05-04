
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