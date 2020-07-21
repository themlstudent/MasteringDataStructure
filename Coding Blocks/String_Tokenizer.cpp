#include<iostream>
#include<cstring>
using namespace std;
// String Tokenizer
int main()
{
	char s[100]="Today, is a rainy,day";
	char *ptr = strtok(s,",");
	cout<<ptr<<endl;
	while(ptr!=NULL)
	{
		ptr=strtok(NULL,",");
		cout<<ptr<<endl;
	}
}
