#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	cout<<"Comparing"<< a << "and"<< b<<endl;
	return a < b;
}
int main()
{
	int arr[100];
	int n;
	cin>> n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n,compare);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" , ";
	}
	
}
