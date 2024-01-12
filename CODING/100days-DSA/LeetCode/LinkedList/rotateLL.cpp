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
    ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }

    // Determine the length of the list
    int len = 1;
    ListNode* temp = head;
    while (temp->next) {
        temp = temp->next;
        len++;
    }

    // Connect the last node to the head to form a cycle
    temp->next = head;

    // Find the new tail, which is (len - k % len - 1) nodes ahead of the head
    for (int i = 0; i < len - k % len - 1; i++) {
        head = head->next;
    }

    // The new head is one node ahead of the new tail
    temp = head->next;

    // Break the cycle
    head->next = nullptr;

    return temp;
}
};
int main(){
    ListNode *head=new ListNode(1);
    ListNode *second=new ListNode(2);
    ListNode *third=new ListNode(3);
    ListNode *fourth=new ListNode(4);
    ListNode *fifth=new ListNode(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    
    // ... (your existing code) ...
    Solution s;
    cout << "Before calling rotateRight" << endl;
    ListNode *temp=s.rotateRight(head,2);
    cout << "After calling rotateRight" << endl;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0;
}