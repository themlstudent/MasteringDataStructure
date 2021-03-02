#include<iostream>
using namespace std;
class node
{
	public :
		int data;
		node* next;
		node(int d)
		{
			data=d;
			next =NULL;
		}
};
void insertAtHead(node*&head,int d)
{
	if(head==NULL)
	{
		head =new node(d);
		return ;
	}
	node *n=new node(d);
	n->next=head;
	head =n;
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ->";
		head=head->next;
	}
	cout<<endl;
}
int length(node*head)
{
	int cnt=0;
	while(head!=NULL)
	{
		cnt++;
		head=head->next;
	}
	return cnt;
}
void insertAtTail(node*&head,int data)
{
	if(head==NULL)
	{
		head =new node(data);
		return;
	}
	node*tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next =new node(data);
	return;
}
void insertAtMiddle(node*&head,int data ,int p)
{
	// Corner Case
	if(head==NULL or p==0)
	{
		insertAtHead(head,data);
		
	}
	else if(p>length(head))
	{
		insertAtTail(head,data);
	}
	else 
	{
		int jump =1;
		node*temp=head;
		while(jump<=p-1)
		{
			temp=temp->next;
			jump++;
		}
		node*n=new node(data);
		n->next =temp->next;
		temp->next=n;
		
	}
}
void deleteHead(node*&head)
{
	if(head==NULL)
	{
		return;
	}
	node*temp=head->next;
	delete head;
	head =temp;
}
int main()
{
	node* head=NULL;
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtHead(head,4);
	insertAtHead(head,0);
	print (head);
	insertAtMiddle(head,4,3);
	insertAtTail(head,7);
	print(head);
	deleteHead(head);
	print(head);
	
}
