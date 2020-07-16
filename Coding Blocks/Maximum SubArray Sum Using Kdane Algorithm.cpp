#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[10];
	cin>>n;
	int csum=0;
	int msum=0;

	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=0;i<n;i++)
	{
		csum=csum+arr[i];
		if(csum<0)
		{
			csum=0;
		}
		msum=max(csum,msum);
	}
	cout<<"The Maximum Sum is "<< msum ;
}
