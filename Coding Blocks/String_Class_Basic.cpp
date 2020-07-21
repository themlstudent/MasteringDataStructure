#include<iostream>
#include<string>
using namespace std;
int main ()
{
	// Sting Intilization
	string s0="";
	string s1("Hello");
	
	string s2="Hello World";
	
	// Using Copy Constuctor
	
	string s3(s2); // we can use string s4 = s2 ;
	
	// Intilization String object from an array
	
	  char a[] ={'a','b','c','\0'};
	  string s4 (a);
	  
	  cout<<s1<<endl;
	  cout<<s2<<endl;
	  cout<<s3<<endl;
	  cout<<s4<<endl;
	  
	  // To check the sting empty or not
	  
	  if(s0.empty())
	  {
	  	cout<<"s0 is empty string"<<endl;
	  }
	   else
	   cout<<" Not a empty string"<<endl;
	   
	   // Append the sting 
	   s0.append("I love c++");
	   cout<<s0<<endl;
	   s0+=" and Python";
	   cout<<s0<<endl;
	   
	   // Clear or Remove the string 
	   cout<<s0.length()<<endl;
	   s0.clear();
	   cout<<s0.length()<<endl;
	   
	   // Compare Two  Strings Lexographic Comparision
	   // We can also use  greater and smaller than for  comparision  they are oveloaded for the string
	   s0=" Apple ";
	   s1="Mango";
	   cout<<s0.compare(s1)<<endl; // Returns an integer ==0 when equal , for not equal >0 or <0
	   
	   // Finding Substring Inside string
	   
	   string s=" I want to  apple juice";
	   int idx=s.find("apple");
	   cout<<idx<<endl;
	   
	   // Remove a word from string 
	   
	   string word="apple";
	   int len=word.length();
	   cout<<s<<endl;
	   s.erase(idx,len+1);
	   cout<<s<<endl;
	   
	   // Iterate over all the strings
	   for(int i=0;i<s1.length();i++)
	   {
	   	cout<<s1[i]<<":";
	   	
	   }
	   cout<<endl; 
	   // For Each
	   
	   for(char c:s1)
	   {
	   	cout<<c<<":";
	   }
	   
}


