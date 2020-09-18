#include<iostream>
using namespace std;

bool isPal(int n)
{
	int res =0;
	int temp=n;
	while  (temp!=0 )
	{
		int ld= temp%10;
		res =res*10+ld;
		temp=temp/10;
	}
	return res==n;
}
int main() {
    
    	int number = 1331;
    	
    	cout<<(bool)isPal(number);
    	
    	return 0;
}
