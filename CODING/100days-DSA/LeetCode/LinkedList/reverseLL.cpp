#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *previous=nullptr, *current=head, *forward=head;
        while(forward!=0){
            forward=forward->next;
            current->next=previous;
            previous=current;
            current=forward;
        }
        
        return previous;
    }
};
int main(){
    Solution s;
    ListNode *head=new ListNode(1);
    ListNode *second=new ListNode(2);
    ListNode *third=new ListNode(3);
    ListNode *fourth=new ListNode(4);
    ListNode *fifth=new ListNode(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    ListNode *ans=s.reverseList(head);
    while(ans!=0){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    cout<<endl;     
    return 0;
}