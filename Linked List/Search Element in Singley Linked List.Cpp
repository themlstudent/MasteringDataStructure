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
void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<"------->";
        curr=curr->next;
        }
        cout<<endl;
}
int search(Node *head,int x)
{
	int pos=1;
	Node *curr=head;
	while(curr!=NULL)
	{
		if(curr->data==x)
		{
			return pos;
		}
		else
		{
			pos++;
			curr=curr->next;
		}
	}
	return -1;
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
	cout<<"Position of Element in Linked List:"<<search(head,10);
}
