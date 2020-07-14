#include<iostream>
using namespace std;
void Bubble_sort(int arr[],int n)
{
	for (int itr =0;itr<n;itr++)
	{
		for(int j=0;j<=(n-itr-1);j++)
		{
			if (arr[j]>arr[j+1])
			{
			
			swap(arr[j],arr[j+1]);
		}
		}
	}
}
int main ()
{
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Bubble_sort(arr,n);
	for(int i=0;i<n;i++)
	{
	
	cout<<arr[i]<<",";
   }
}
