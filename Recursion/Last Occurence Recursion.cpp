#include<iostream>
using namespace std;
int lastOccur(int *a,int n ,int key)
{
	if(n==0)
	{
		return -1;
	}
	// rec case 
	int i =lastOccur(a+1,n-1,key);
	if(i==-1)
	{
		if(a[0]==key)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	return i+1;
}
int firstOccur(int *a,int n,int key)
{
	if(n==0)
	{
		return -1;
	}
	if(a[0]== key)
	{
		return 0;
	}
	int i=firstOccur(a+1,n-1,key);
	if(i==-1)
	{
		return -1;
	}
	return i+1;
}
int main()
{
	int arr[]={1,2,3,7,4,5,6,7,10};
	int n=sizeof(arr)/sizeof(int);
	int key=7;
	cout<<firstOccur(arr,n,key)<<endl;
	cout<<lastOccur(arr,n,key);
	return 0;
}
