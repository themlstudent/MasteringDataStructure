#include<iostream>
using namespace std;
// Bubble sort 
  void Bubble_sort(int a[],int n)
      {
      	    // N-1 large elements to the end 
      	   for(int itr=0;itr<=n-1;itr++)
      	     
      	        {
      	        	// Pairwise  swapping in the unsorted of the array
      	        	for (int j =0;j<(n-itr-1);j++)
      	        	   {
      	        	   	   if (a[j]>a[j+1])
      	        	   	   {
      	        	   	   	    swap(a[j],a[j+1]);
								}
						 }
				  }
	  }
int main ()

{
     int n ;
	int a[100];
	cout<<"Enter  the number of elemets:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	 cin>>a[i];
	 }
	 
	Bubble_sort(a,n);
	for (int i=0;i<n;i++)
	      {
	           cout<<a[i]<<" ,";
			   	
		  }
	return 0;
	  
}
