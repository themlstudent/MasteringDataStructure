#include<iostream>
using namespace std;
int main()
{
	int arr[] ={1,3,5,7,10,11,12,13};
	int s=16;
	int i=0;
	int j=sizeof(arr)/sizeof(int)-1;
	
	while(i<j)
	{
		int current_sum=arr[i]+arr[j];
		if(current_sum>s)
		{
			j--;
		}
		else if(current_sum<s)
		{
			i++;
		}
		else if(current_sum==s)
		{
			cout<<arr[i]<<" and "<<arr[j]<<endl;
			i++;
			j--;
		}
	}
}
