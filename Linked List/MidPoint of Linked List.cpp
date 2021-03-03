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
node* take_input()
{
	int d ;
	cin>>d;
	node*head=NULL;
	while(d!=-1)
	{
		insertAtHead(head,d);
		cin>>d;
	}
	return head;
}
ostream& operator<<(ostream &os,node*head)
{
	print(head);
	return os;
}
istream& operator>>(istream &is,node*&head)
{
	head=take_input();
	return is;
}
// Reverse A Linked List
void reverseLinkedList(node*&head)
{
	node* C=head;
	node*P=NULL;
	node*N;
	while(C!=NULL)
	{
		// Save The next Node
		N=C->next;
		//make the current node point to prev
		C->next=P;
		// Update P and C take them 1 step forward
         P=C;
         C=N;
	}
}
node*midpoint(node*head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL and fast->next!=NULL )
	{
		fast=fast->next->next;
		slow=slow->next;
    }
    return slow;
}

int main()
{
	//node* head=take_input();
	node*head;
	cin>>head;
	cout<<head;
	node*mid=midpoint(head);
	cout<<mid->data<<endl;
	//reverseLinkedList(head);
	// print(head);
	
	/*
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
	print(head);*/
	
}
