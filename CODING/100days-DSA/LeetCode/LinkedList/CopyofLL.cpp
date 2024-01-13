#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// class Solution {
// public:

    Node* copyRandomList(Node* head) {
            unordered_map<Node*,Node*> hashMap;
    Node* temp = head;
//first iteration for inserting deep nodes of every node in the hashmap.
    while(temp != NULL) {
        Node* newNode = new Node(temp->val);
        hashMap[temp] = newNode;
        temp = temp->next;
    }
    Node* t = head;
//second iteration for linking next and random pointer as given question.
    while(t != NULL) {
        Node* node = hashMap[t];
        if(t->next!=NULL){
            node->next=hashMap[t->next];
        }
        if(t->random!=NULL){
            node->random=hashMap[t->random];
        }
        t = t->next;
    }
    return hashMap[head];
}

// };
int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->random = head->next;
    head->next->random = head->next;

    // Copy the linked list
    Node* copyHead = copyRandomList(head);

    // Print the values and random pointers of the copied list
    for (Node* node = copyHead; node != nullptr; node = node->next) {
        cout << "Value: " << node->val << ", Random: " << (node->random ? node->random->val : -1) << endl;
    }

    // Don't forget to delete your nodes to avoid memory leaks
    delete head->next;
    delete head;
    delete copyHead->next;
    delete copyHead;

    return 0;
}