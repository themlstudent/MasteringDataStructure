#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node (int x)
		{
			data=x;
			next=NULL;
		}
};
void printList(Node *head)
{
	Node *curr=head;
    while(curr!=NULL)
    {
    	cout<<curr->data<<"-->";
    	curr=curr->next;
	}
	cout<<endl;
}
void printMiddle(Node *head)
{
	if(head==NULL)return;
    Node*slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
    	slow=slow->next;
    	fast=fast->next->next;
	}
	cout<<slow->data;
}
int  main()
{
	Node *head=new Node(100);
	head->next=new Node(120);
	head->next->next=new Node(130);
	head->next->next->next=new Node(140);
	head->next->next->next->next=new Node(150);
	head->next->next->next->next->next=new Node(160);
    printList(head);
    cout<<"Middle Element of Linked List"<<endl;
    printMiddle(head);
	return 0;
}
