#include<iostream>
using namespace std;

class Node
{
     public:
	 int data;
	 Node *next;
	 Node(int x)
	 {
	 	data=x;
	 	next=NULL;
		 }	
};
void printlist(Node *head)
{
	if(head==NULL) return ;
	cout<<head->data<<"-->";
	for(Node*p=head->next;p!=head;p=p->next)
	{
		cout<<p->data<<"--->";
	}
}
Node *deletehead(Node *head)
{
	if (head==NULL) return NULL;
	if(head->next==head)
	{
		delete head;
		return NULL;
	}
	Node * curr=head;
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	curr->next=head->next;
	delete head;
	return (curr->next);
	
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
	printlist(head);
	cout<<"After Deletion";
	head=deletehead(head);
	
	printlist(head);
}
