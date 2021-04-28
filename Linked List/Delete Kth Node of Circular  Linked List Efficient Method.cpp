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
	head->data=head->next->data;
	Node *temp=head->next;
	head->next=head->next->next;
	delete temp;
	return head;
	
}
Node *deletekth (Node *head,int k)
{
	if(head==NULL)return head;
	if(k==1) return deletehead(head);
	Node *curr=head;
	for(int i=0;i<k-2;i++)
	{
		curr=curr->next;
}
	Node*temp=curr->next;
	curr->next=curr->next->next;
	delete temp;
	return head;
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
	head=deletekth(head,3);
	
	printlist(head);
}
