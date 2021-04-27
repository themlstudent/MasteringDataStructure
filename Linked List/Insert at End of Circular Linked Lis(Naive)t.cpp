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
Node *insertEnd(Node *head,int d)
{
	Node*temp=new Node(d);
	if(head==NULL)
	{
		temp->next=temp;
		return temp;
	}
	else
	{
		Node *curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		curr->next=temp;
		temp->next=head;
	}
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
	cout<<"After Insertion";
	head=insertEnd(head,25);
	
	printlist(head);
}
