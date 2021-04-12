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

    while (head != NULL) {
        cout << head->data << " ";
       
        head= head->next;
        
    }

}
int countNode(node *head)
{
	int count =0;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}
	return count;
}
int  main()
{
	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
    printList(head);
    cout<<endl;
   cout<<" There are "<<countNode(head)<<" Node in Linked List";
	return 0;
}
