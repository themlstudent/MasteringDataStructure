#include<iostream>
using namespace std;
int maxConsecutiveOnes( int arr[],int n)
{
	int res=0;int cur=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			cur=0;
		}
		else 
		{
			cur++;
			res=max(res,cur);
		}
	}
	return res;
}
int main() {
	
     int arr[] = {0, 1, 1, 0, 1, 1, 1};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<maxConsecutiveOnes(arr, n);
    
}
