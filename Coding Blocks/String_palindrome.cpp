#include<iostream>
#include<cstring>
using namespace std;
// Read a sentence /paragraph and check if its palinndrome or not 

bool ispalindrome(char a[])
{
	int i=0;
	int j= strlen(a)-1;
	while(i<j)
	{
		if  (a[i]=a[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main ()
{
	char a [100];
	cin.getline(a,100);
	if (ispalindrome(a))
	{
		cout<<" palindrome string";
		
	}
	else 
	{
		cout<< "not palindrome string";
	}
}
