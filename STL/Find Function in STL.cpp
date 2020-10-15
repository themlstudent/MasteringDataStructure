#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={10,20,9,7,8,4};
	int n=sizeof(arr)/sizeof(int);
	int key ;
	cin>>key;
	int* it= find(arr,arr+n,key);
	int index=it-arr;
	if(index==n)
	{
		cout<<key<<" Not Foundd here";
	}
	else
	{
	
	cout<<index;
    }  
}
