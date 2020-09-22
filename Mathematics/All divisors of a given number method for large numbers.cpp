#include<iostream>
using namespace std;
void AllDivisors(int n)
{
	int i;
	for(i=1;i*i<=n;i++)
	{
		cout<<i;
	}
	for(;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<n/i;
		}
	}
}
int main()
{
	int n=20;
	AllDivisors(n);
}
