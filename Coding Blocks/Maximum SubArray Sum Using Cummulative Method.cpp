#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[10];
	int cum_sum[10]={0};
	cin>>n;
	int current_sum=0;
	int maximum_sum=0;
	int left=-1;
	int right=-1;
	cin>>arr[0]; 
	cum_sum[0]=arr[0];
	
	for (int i=1;i<n;i++)
	{
		cin>>arr[i];
		cum_sum[i]=cum_sum[i-1]+arr[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int current_sum=0;
			current_sum=cum_sum[j]-cum_sum[i-1];
			
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
