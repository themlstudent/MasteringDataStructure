#include<iostream>
using namespace std;
int interploationsearch(int a[],int n,int x)
{
	// Finding the first and last index
	int l=0;
	int h=(n-1);
	while(l<=h && x>=a[l] && x<=a[h])
	{
		if(l==h)
		{
			if(a[l]==x) return l;
			return-1;
		}
	int pos = l + (((double)(h - l) / 
            (a[h] - a[l])) * (x - a[l]));
			
			if (a[pos]==x)
			return pos;	
			
		   if (a[pos]<x)
		   l=pos+1;
		   else 
		   h=pos-1;
	}
	return -1;
}

int main()
{
 int a[]={10, 12, 13, 16, 18, 19, 20, 21, 
                 22, 23, 24, 33, 35, 42, 47};
int n=sizeof(a)/sizeof(a[0]);
int x=20;//  Element to be searched
int index = interploationsearch(a,n,x);
if(index!=-1)
 cout<<"Element found at index"<< index;
 else
 cout<<"Element not found";		 	
}
