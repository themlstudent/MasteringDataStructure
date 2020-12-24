#include<iostream>
using namespace std ;
int getlargest(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
			res=i;
		}
	}
	return res;
}

int getsecondLargest(int arr[],int n)
{
	int largest=getlargest(arr,n);
	int res=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[largest])
		{
			if(res==-1)
			{
				res=i;
			}
			else if(arr[i]>arr[res])
			{
				res=i;
			}
		}
	}
	return res;
}
int main()
{
	int arr[]={10,200,30,40};
	cout<<getsecondLargest(arr,4);
	return 0;
	
}
