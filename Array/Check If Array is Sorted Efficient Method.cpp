#include<iostream>
using namespace std;
int ArrayisSorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr[]={5,12,30,32,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<ArrayisSorted(arr,n);
	return 0;
}
