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
	// Wave Print of 2D Array :
	
	for(int col=0;col<n;col++)
	{
		if(col%2==0)
		{
			// If column is Even then we traverse Array Top to Down 
			for(int row =0;row<m;row++)
			{
				cout<<arr[row][col]<<" ";
			}
		}
		else 
		{
			// If column is odd then we traverse Array  Bottom to up 
				for(int row =m-1;row>=0;row--)
			{
				cout<<arr[row][col]<<" ";
			}
		}
	}
	
}
