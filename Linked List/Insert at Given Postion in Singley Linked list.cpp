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
Node *insertpos(Node *head,int pos,int data)
{
	Node *temp=new Node(data);
	if(pos==1)
	{
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	for(int i=1;i<=pos-2 && curr!=NULL;i++)
	{
		curr=curr->next;
	}
	if(curr==NULL) return head;
	temp->next=curr->next;
	curr->next=temp;
	return head;
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
	insertpos(head,4,45);
	printlist(head);
}
