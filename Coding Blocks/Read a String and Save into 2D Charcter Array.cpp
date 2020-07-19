#include<iostream>
using namespace std;
int main()
{
	// Read a List of Strings and store them in a 2d Character array
	char a[100][100];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(a[i],1000);
	}
	// Print out all the strings
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
