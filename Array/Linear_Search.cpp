#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int n ;
	cout<<" Enter the number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cout<<"Enter the Key Element do you want to search"<<endl;
	cin>>key;
	int i;
		for(i=0;i<n;i++)
	{
		if (a[i]==key)
		{
		  cout<<key <<" found at index "<<i;
		  break;
	    }
	}
	if(i==n)
	{
		cout<<key<<" is not present"<<endl;
	}
	return 0 ;
}
