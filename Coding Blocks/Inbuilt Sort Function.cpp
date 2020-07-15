#include<iostream>
#include<algorithm>
using namespace std;
bool comapre(int a,int b)
{
	return a<b;
}
int main()
{
		int n;
	int arr[10];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	sort(arr, arr + n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}
}
