#include<iostream>
using namespace std;

int getlargest(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
			res =i;
		}
	}
	return res;
}

int main()

{
	int arr[]={10,50,8,20};
	cout<<getlargest(arr,4);
	return 0;
}
