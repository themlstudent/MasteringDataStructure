#include<iostream>
using namespace std;
int ArrayisSorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
	  for(int j=i+1;j<n;j++)
	  {
	  	if (arr[j]<arr[i])
	  	{
	  		return false;
		}
	  	
	  }
	  
	}
	return true;
}
int main()
{
	int arr[]={5,12,30,2,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<ArrayisSorted(arr,n);
	return 0;
}
