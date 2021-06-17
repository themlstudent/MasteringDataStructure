#include<iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;

bool isPal(string str)
{
	string rev=str;
	reverse(rev.begin(),rev.end());
	return (rev==str);
}

int main()
{
	string str="ABCA";
	cout<<isPal(str);
}
