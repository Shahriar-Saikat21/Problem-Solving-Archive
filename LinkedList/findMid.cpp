#include<bits/stdc++.h>

using namespace std;

typedef struct listNode
{
    int value;
    listNode* next;
}ListNode;

ListNode* create(int x){
    ListNode* temp = new ListNode();
    temp->value = x;
    temp->next = NULL;
    return temp;
}

void printList(ListNode* head){
    if(!head){
        cout<<"NULL"<<endl;
        return;
    } 
    ListNode* t = head;
    while(t!=NULL){
        cout<<t->value<<" ";
        t = t->next;
    }
    cout<<endl;
}

ListNode* insertTail(ListNode* head,int x){
    if(head==NULL) return head = create(x);
    else{
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = create(x);
    }
    return head;
}

ListNode* findMiddle(ListNode* head){

    if(head==NULL) return NULL;
    if(head->next==NULL) return head;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){

    ListNode* head = NULL;

    for (int i = 1; i <=5 ; i++)
    {
        head = insertTail(head,i);
    }

    printList(head);

    ListNode* result = findMiddle(head);
    (result==NULL)? cout<<"Null"<<endl:cout<<result->value<<endl;
    

    return 0;
}