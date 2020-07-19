#include<iostream>
using namespace std;
int main()
{
	char c[10][10];
	c[0][0]='A';
	char b[][10]={{'a','b','\0'},{'c','d','e','f','\0'}};
	char a[][10]={"ab","def","ghi","Hello"};
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
}
