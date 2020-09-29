#include<iostream>
using namespace std;
int ifprime(int n)
{
	if (n==1)
	{
		return false;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;

}
void primeFactor(int n)
{
	for(int i=2;i<n;i++)
	{
		if(ifprime(i))
		{
			int x =i;
			while(n%x==0)
			{
				cout<<i<<endl;
				x=x*i;
			}
		}
	}
	
}

int main ()
{
	int n =6;
	primeFactor(n);
	return 0;
}
