#include<iostream>
using namespace std;
int main()
{
	int arr [10] [10]= {0};
	int m,n ;
	cin>>m>>n;
	int value =1 ;
	for (int row=0;row<=m-1;row++)
	{
		for(int col =0;col<=n-1;col++)
		{
			arr[row][col]=value;
			value = value+1;
			cout<<arr[row][col]<<" ";
			
		}
		cout<<endl;
	}
	
}
