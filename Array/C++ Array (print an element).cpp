#include<iostream>
using namespace std;
int main()
{
 int t ,n ,key;
 int a[100];
 cin>> t;
   while(t--)
   {
   	cin>> n>>key;
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
	   }
	   
	   cout<<a[key];
   }
}

