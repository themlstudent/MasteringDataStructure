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
Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}
Node *deleTail(Node *head)
{
	if(head==NULL) return NULL;
	if(head->next==NULL)
	{
		delete(head);
		return  NULL;
	}
	Node*curr=head;
	while(curr->next->next!=NULL)
	{
		curr=curr->next;
		
	}
	delete(curr->next);
	curr->next=NULL;
	return head;
	
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<"------->";
        curr=curr->next;
        }
        cout<<endl;
}
int main()
{
	Node*head=NULL;
	head=insertBegin(head,60);
	head=insertBegin(head,50);
	head=insertBegin(head,40);
	head=insertBegin(head,30);
	head=insertBegin(head,20);
	head=insertBegin(head,10);
	printlist(head);
	head=deleTail(head);
	printlist(head);
	
}
