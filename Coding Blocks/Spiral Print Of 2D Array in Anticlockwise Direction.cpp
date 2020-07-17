#include<iostream>
using namespace std;

void Spiralprint(int a[][10],int m,int n)
{
	int startRow=0;
	int startCol=0;
	int endRow=m-1;
	int endCol=n-1;
	
	while(startRow<=endRow and startCol<=endCol)
	{  //first Colum
		if (endCol>startCol)
		{
				
		for (int i=endRow;i>=startRow;i--)
		{
			cout<<a[i][startCol]<<","<<" ";
		}
		startCol++;
	   }
	   // last row 
	   if (endRow>startRow)
		{
		
		for (int i=endCol;i>=startCol;i--)
		{
			cout<<a[endRow][i]<<","<<" ";
		}
		endRow--;
	    }
	    // last column
	    for (int i=startRow;i<=endRow;i++)
		{
			cout<<a[i][endCol]<<","<<" ";
		}
		endCol--;
		// first Row
		for (int i=startCol;i<=endCol;i++)
		{
			cout<<a[startRow][i]<<","<<" ";
		}
		startRow++;
		
	}
	cout<<"END";

}

int main ()
{
	int a[10][10]={0};
	int m,n;
	cin>> m>>n;
	int value =1;
	for (int row=0;row<=m-1;row++)
	{     
		for(int col =0;col<=n-1;col++)
		{  a[row][col]=value;
		     value++;
			
			cout<<a[row][col]<<" ";
		}
		 cout<<endl;
	}
	Spiralprint(a,m,n);
	return 0;
}
	
