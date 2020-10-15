#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={20,30,40,40,40,50,100,1100};
	int n=sizeof(arr)/sizeof(int);
	int key ;
	cin>>key;
	bool present= binary_search(arr,arr+n,key);
	if(present)
	{
		cout<<"Presrnt"<<endl;
	}
	else
	{
		cout<<"Absent"<<endl;
	}
	
	int * lb=lower_bound(arr,arr+n,40);
	cout<< endl<<"Lower Bound"<<(lb-arr)<<endl;
	
	int *up=upper_bound(arr,arr+n,40);
	cout<<"Upper bound"<<(up-arr)<<endl;
	
	cout<<"Occurence of frequency of 40 is"<<(up-lb);
}
