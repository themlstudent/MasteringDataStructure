#include<iostream>
using namespace std;
void AllDivisors(int n)
{
	for(int i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			if(i!=n/i)
			{
				cout<<n/i;
			}
		}
	}
}
int main()
{
	int n=10;
	AllDivisors(n);
}
