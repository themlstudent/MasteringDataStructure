#include<iostream>
using namespace std; 
int thirdLargest(int a[], int n)
{
     
     if(n<3)
     {
         return -1;
     }
     
     int first=a[0];
     for(int i=0;i<n;i++)
     {
         if(a[i]>first)
         {
             first=a[i];
         }
     }
      int second=INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(a[i]>second && a[i]<first)
         {
             second=a[i];
         }
     }
      int third=INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(a[i]>third && a[i]<second)
         {
             third=a[i];
         }
     }
     return third;
}
int main() 
{ 
    int arr[] = {12, 13, 1, 10, 34, 16}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
   cout<< thirdLargest(arr, n); 
    return 0; 
} 

