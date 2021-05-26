#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	return floor(log10(n)+1);
}
int main()
{
	int number = 711289;
    	
    	cout<<countDigits(number);
    	
    	return 0;
}
