#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n;
	cin>> n;
	int key ;
	cin>>key;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<" Element found at index "<<i;
		}
	}
}
