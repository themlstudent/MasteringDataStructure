// Rotating 2D Array Anticlock

#include<iostream>
using namespace std;
void display(int arr[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void rotate (int arr [][100],int n)
{
	// Reverse Each Row 
	for(int row =0;row<n;row++)
	{
		int start_col=0;
		int end_col=n-1;
		while(start_col<end_col)
		{
			swap(arr[row][start_col],arr[row][end_col]);
			start_col++;
			end_col--;
		}
	}
	// To Take Transpose 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i<j)
			{
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
}

int main()
{
	int arr[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

    rotate( arr,n);
    display(arr,n);
}
