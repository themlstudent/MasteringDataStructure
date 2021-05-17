#include<iostream>
using namespace std;

class Node{
	public:
		int key ;
		Node *left;
		Node *right;
		Node(int k)
		{
			key=k;
			left=right=NULL;
		}
};
void Postorder(Node *root)

{  if(root!=NULL)
{
    Postorder(root->left);
	Postorder(root->right);
	cout<<root->key<<"--->";
}

}
int heightoftree(Node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return (1+max(heightoftree(root->left),heightoftree(root->right)));
	}
}
int main()
{
	Node*root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	Postorder(root);
	cout<<endl;
	cout<<" Height Of Binary Tree  ";
	cout<<heightoftree(root);
}
