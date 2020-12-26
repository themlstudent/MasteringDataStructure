#include<iostream>
using namespace std;
int leftRotate(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
int main()
{
	int arr[]={1,2,4,6,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
       leftRotate(arr,n);
       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       return 0;
	
}
