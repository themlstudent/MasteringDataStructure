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
Node *insertBeg(Node *head,int d)
{
	Node*temp=new Node(d);
	if(head==NULL)
	{
		temp->next=temp;
		return temp;
	}	
	else{
		temp->next=head->next;
		head->next=temp;
		int t=head->data;
		head->data=temp->data;
		temp->data=t;
		return head;
	}
	
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
	printlist(head);
	cout<<endl;
	cout<<"After Insertion"<<endl;
	head=insertBeg(head,25);
	
	printlist(head);
}
