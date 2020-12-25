#include<iostream>
using namespace std;
void ReversetheArray(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
int main()
{
	int arr[]={5,12,30,2,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
  n=	ReversetheArray(arr,n);
	
    cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
	
	return 0;
}
