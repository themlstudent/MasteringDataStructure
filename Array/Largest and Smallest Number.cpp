#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int arr[10];
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	int largest=INT_MIN;
	int smallest =INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
		largest=arr[i];
		
     	}
     	if(arr[i]<smallest)
     	smallest=arr[i];
	}
	cout<<"Largest  "<<largest<<endl;
	cout<<"Smallest "<<smallest;
	return 0;

}
