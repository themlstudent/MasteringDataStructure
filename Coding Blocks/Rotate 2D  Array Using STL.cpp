// Rotating 2D Array Anticlockwise Direction

#include<iostream>
#include<algorithm>
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
   for(int i=0;i<n;i++)
   {
   	reverse(arr[i],arr[i]+n);
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
