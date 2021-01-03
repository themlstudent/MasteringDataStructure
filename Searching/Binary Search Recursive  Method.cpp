#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int x)
{
	if(low>high)
	{
		return -1;	
	}
	int mid=(low+high)/2;
	if(arr[mid]==x)
	{
		return mid;
	}
	else if(arr[mid]>x)
	{
		return binarySearch(arr,low,mid-1,x);
	}
	else
	{
		binarySearch(arr,mid+1,high,x);
	}
}
int main()
{
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=20;
	cout<<"Element Found at Index :>"<<binarySearch(arr,0,n-1,x);
	return 0;
}
