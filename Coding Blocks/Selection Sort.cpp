#include<iostream>
using namespace std;

// SElection Sort
void selection_sort(int arr[],int n)
{
	// Find out the smallest element idx in the unsorted part
	for (int i=0;i<n;i++)
	{
		int min_index=i;
	    for (int j=i+1;j<n;j++)
	    {
	    	if(arr[j]<arr[min_index])
	    	{
	    		min_index=j;
			}
		}
		// After this loop we can swap finaly 
				swap(arr[i],arr[min_index]);
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
	selection_sort(arr,n);
	for(int i=0;i<n;i++)
	{
	
	cout<<arr[i]<<",";
   }
}
