#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int x)
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
}
Node *sortedList(Node *head,int x)
{
	Node*temp=new Node(x);
	if(head==NULL) return temp;
	if(x<head->data)
	{
		temp->next=head;
		return temp;
	}
	Node*curr=head;
	while(curr->next!=NULL && curr->next->data<x)
	{
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}
int  main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	//cout<<head->data<<"-->"<<head->next->data<<"-->"<<head->next->next->data;
	head=sortedList(head,5);
    printList(head);
	return 0;
}
