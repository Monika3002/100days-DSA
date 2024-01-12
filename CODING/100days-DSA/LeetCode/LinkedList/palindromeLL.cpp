  #include<iostream>
#include<bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
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
        if(head==NULL || head->next==NULL) return true;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *cur=slow;
        
        ListNode *pre=NULL;
        while(cur!=NULL){
           ListNode * nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
            
        }

        ListNode *dummy =head;
        ListNode *second=pre;
        while(second!=NULL ){
            if(dummy->val!=second->val) {return false;}
            dummy=dummy->next;
            second=second->next;
        }
        return true;
    }
};