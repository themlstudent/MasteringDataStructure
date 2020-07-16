#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[10];
	cin>>n;
	int current_sum=0;
	int maximum_sum=0;
	int left=-1;
	int right=-1;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int current_sum=0;
			for (int k=i;k<=j;k++)
			{
				current_sum+=arr[k];
		   }
		   
		     if(current_sum>maximum_sum)
		     {
		     	maximum_sum= current_sum;
		     	left =i;
		     	right=j;
			 }
		}
	}
	cout<<"Maximum Sum is "<<maximum_sum<<endl;
	for(int  k=left;k<=right;k++)
	{
		cout<<arr[k]<<" ,";
	}
}
