#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[10];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for (int k=i;k<=j;k++)
			{
				cout<<arr[k]<<",";
		   }
		   
		   cout<<endl;
		}
	}
}
