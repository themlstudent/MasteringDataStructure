#include<iostream>

using namespace std;
// template<class T>
template<typename T>
int search(T arr[],int n,T key)
{
	for(int p=0;p<n;p++)
	{
		if(arr[p]==key)
		{
			return p;
		}
	}
	return n;
}
int main()
{
	int a[]={1,2,3,4,10,13};
	int key =10;
	int n=sizeof(a)/sizeof(int);
	//cout<<search(a,n,key)<<endl;
	float b[]={1.1,1.2,1.3,1.4};
	float k=1.2;
	cout<<search(b,3,k);
}
