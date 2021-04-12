#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int d)
		{
			data=d;
			next =NULL;
		}
		
	
};
void printList(node* head)
{
    if (head==NULL)
    {
    	return;
	}
	cout<<head->data<<"---->";
	printList(head->next);
    
}
int  main()
{
	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	//cout<<head->data<<"-->"<<head->next->data<<"-->"<<head->next->next->data;
    printList(head);
	return 0;
}
