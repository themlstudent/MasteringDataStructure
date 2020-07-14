#include<iostream>
using namespace std;

void Insertion_sort (int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}
int main()
{
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Insertion_sort(arr,n);
	for(int i=0;i<n;i++)
	{
	
	cout<<arr[i]<<",";
   }
}
