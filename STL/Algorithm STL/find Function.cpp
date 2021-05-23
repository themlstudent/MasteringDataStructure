#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={1,5,4,3,6,7};
	int n =sizeof(arr)/sizeof(int);
	int key=7;
    find(arr,arr+n,key);
    int index = find(arr,arr+n,key)-arr;
    cout<<index;
	
}
