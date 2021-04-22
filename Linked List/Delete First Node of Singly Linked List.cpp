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
Node *delehead(Node *head)
{
	if(head==NULL)
	{
		return NULL;
	}
	else
	{
	
	Node *temp=head->next;
	delete(head);
	return temp;
    }
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
	head=delehead(head);
	printlist(head);
	
}
