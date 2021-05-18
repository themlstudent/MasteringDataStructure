#include<iostream>
#include<list>
#include <bits/stdc++.h>
using namespace std;
// template<class T>
template<typename T>
int search(T arr[],int n,T key)
{
	for(int p=0;p<n;p++)
	{
		if(arr[p]==key)
		{
			return p;
		} 
	}
	return n;
}
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key)
{
	while(start!=end)
	{
		if(*start==key)
		{
			return start;
		}
		start++;
	}
	return end;
}
class Book{
	public:
		string name;
		int price;
		Book()
		{
			
		}
		Book(string  name, int price)
		{
			this->name=name;
			this->price=price;
		}
};
class BookCompare{
	public:
		bool operator()(Book A, Book B){
			if(A.name==B.name)
			{
				return true;
			}
			return false;
		}
};

int main()
{
    
	Book b1("c++",100);
	Book b2("python",120);
	Book b3("java",130);
	Book b4(b1);
	list<Book>l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);

	Book booktofind("c++",110);
	
      BookCompare cmp;
	  if(cmp(b1,booktofind)) 
	  {
	  	cout<<"True Same Books";
		  }    
}
