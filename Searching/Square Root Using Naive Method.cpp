#include<iostream>
using namespace std;
int Squareroot(int x)
{
	int i=1;
	while(i*i<=x)
	{
		i++;
	}
	return i-1;
}
int main()
{
	cout<<Squareroot(10);
}
