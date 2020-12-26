
#include <iostream> 
using namespace std; 
  
// function to move all zeroes at 
// the end of array 
void moveZerosToEnd(int arr[], int n) 
{ 
    for(int i=0;i<n;i++)
	{   
		if(arr[i]==0)
		{
         for (int j = i+1; j < n; j++) 
           if (arr[j] != 0)  
            {
		
            swap(arr[i], arr[j]); 
            
            }	
		
	   }
      
      }
  }
  
// function to print the array elements 
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver program to test above 
int main() 
{ 
    int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2, 
                         7, 0, 6, 0, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Original array: "; 
    printArray(arr, n); 
  
    moveZerosToEnd(arr, n); 
  
    cout << "\nModified array: "; 
    printArray(arr, n); 
  
    return 0; 
} 
