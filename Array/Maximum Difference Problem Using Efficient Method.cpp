#include<iostream>
using namespace std;
int MaximumDifference(int arr[],int n)
{
	int res=arr[1]-arr[0];
	int minValue=arr[0];
	for(int j=1;j<n;j++)
	{
		res=max(res,arr[j]-minValue);
		minValue = min(minValue,arr[j]);
	}
	return res;
}
int main()
{
	int arr[]={2,3,10,6,4,8,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Maximum Difference : >  "<<MaximumDifference(arr,n);
	return 0;
}
