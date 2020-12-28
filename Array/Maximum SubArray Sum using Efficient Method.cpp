#include<iostream>
using namespace std;
int MaximumSubArraySum(int arr[],int n)
{
	int res=arr[0];
	int maxEnding=arr[0];
	for(int i=1;i<n;i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
		
	}
}
int main()
{
	int arr[]={-3,8,-2,4,-5,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<MaximumSubArraySum(arr,n);
	return 0;
}
