#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 //Definition for linked list.
 class Node {
  public:
		int data;
		Node *next;
 		Node *child;
		Node() : data(0), next(nullptr), child(nullptr){};
		Node(int x) : data(x), next(nullptr), child(nullptr) {}
		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 };
 
Node * mergeTwoList(Node * l1,Node *l2){
	Node *temp=new Node(0);
	Node *res=temp;
	while(l1!=NULL && l2!=NULL){
		if(l1->data<l2->data){
			temp->child=l1;
			temp=temp->child;
			l1=l1->child;
		}
		else{
			temp->child=l2;
			temp=temp->child;
			l2=l2->child;
		}
	}
	if(l1!=NULL) temp->child=l1;
	else temp->child=l2;
	return res->child;
}
Node* flattenLinkedList(Node* head) 
{
	if(head==NULL ||head->next==NULL) return head;
	head->next=flattenLinkedList(head->next);
	head=mergeTwoList(head,head->next);
	return head;
}
int main(){
    Node *head=new Node(1);
    Node *second=new Node(2);
    Node *third=new Node(3);
    Node *fourth=new Node(4);
    Node *fifth=new Node(5);
    Node *sixth=new Node(6);
    Node *seventh=new Node(7);
    Node *eighth=new Node(8);
    Node *ninth=new Node(9);
    Node *tenth=new Node(10);
    Node *eleventh=new Node(11);
    Node *twelth=new Node(12);
    Node *thirteenth=new Node(13);
    Node *fourteenth=new Node(14);
    Node *fifteenth=new Node(15);
    Node *sixteenth=new Node(16);
    Node *seventeenth=new Node(17);
    Node *eighteenth=new Node(18);
    Node *nineteenth=new Node(19);
    Node *twentieth=new Node(20);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=tenth;
    tenth->next=eleventh;
    eleventh->next=twelth;
    twelth->next=thirteenth;
    thirteenth->next=fourteenth;
    fourteenth->next=fifteenth;
    fifteenth->next=sixteenth;
    sixteenth->next=seventeenth;
    seventeenth->next=eighteenth;
    eighteenth->next=nineteenth;
    nineteenth->next=twentieth;
    twentieth->next=NULL;
    
    // ... (your existing code) ...
    cout << "Before calling flattenLinkedList" << endl;
    Node *temp=flattenLinkedList(head);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->child;
    }
    return 0;
}