#include<iostream>
using namespace std;
 class Node
 {
     public:
	 
	 int data;
	 Node *next;
	 Node *prev;
	 Node (int x)
	 {
	 	data=x;
	 	next=NULL;
	 	prev=NULL;
	 }
	 	
 };
 
 void printlist(Node *head)
 {
 	if(head==NULL) return ;
 	Node *p =head;
 	do{
 		cout<<p->data<<"--->";
 		p=p->next;
	 }while(p!=head);
 }
 
 Node *insertHead(Node *head,int x)
 {
 	Node *temp=new Node(x);
 	if(head==NULL)
 	{
 		temp->next=temp;
 		temp->prev=temp;
 		return temp;
	 }
	 temp->prev=head->prev;
	 temp->next=head;
	 head->prev->next=temp;
	 head->prev=temp;
	 return temp;
 }
 
 int main()
 {
 	Node *head=new Node (10);
 	Node *temp1=new Node(20);
 	Node *temp2=new Node (30);
 	head->next=temp1;
 	temp1->next=temp2;
 	temp2->next=head;
 	temp2->prev=temp1;
 	temp1->prev=head;
 	head->prev=temp2;
 	head=insertHead(head,5);
 	printlist(head);
 	
 }
