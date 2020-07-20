#include<iostream>
using namespace std;
int main()
{
	// Difference between character arrya and int array 
	// In case  of int array we will get output as firt addres of int arrya
	    // but in case of character array we will get the contains of the character array
	int b[10]={1,2,3};
	cout<<b<<endl;
	char a[10]={'a','b','c','e','\0'};
	cout<<a<<endl;
	//Input
	char s1[]={'h','e','l','l','o'}; //Does not terminate with null  
	char s2[]="hello";
	cout<<s1<<" "<<sizeof(s1)<<endl;// 5 Bytes
	cout<<s2<<" "<<sizeof(s2)<<endl;// 6 Bytes
	
	char s3[10]="hello";
	cout<<s3<<" "<<sizeof(s3)<<endl;
	char s4[10];
	cin>>s4;
		return 0;
	
}
