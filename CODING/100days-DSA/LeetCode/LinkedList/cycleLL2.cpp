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
// class Solution {
// public:
//     hasCycle(ListNode *head) {
//         if(head==NULL){
//             return false;
//         }
//         ListNode *slow =head;
//         ListNode *fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 return true;
//             }
//         }
//         return fast;
//     }
// };
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode *slow=head;
//         ListNode *fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow->next==fast->next->next){
//                 break;
//             }
//         }
//         return fast;

        
//     }
// };


    ListNode *detectCycle(ListNode *head) {
        //using hash table
        unordered_set<ListNode *>s;
        while(head!=NULL){
            if(s.find(head)!=s.end()) return head;
            else{
                s.insert(head);
                head=head->next;
            }
        }
        return NULL;


        
    }
int main() {
    std::vector<int> values = {3,2,0,-4};
    std::vector<ListNode*> nodes;

    
 ListNode* cycleNode = detectCycle(nodes[0]);
    std::cout << "Cycle starts at: " << cycleNode->val << std::endl;
  
   return 0;
}