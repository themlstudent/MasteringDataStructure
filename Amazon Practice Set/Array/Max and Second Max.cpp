#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);


 // } Driver Code Ends


     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    
    /*********************************
     * Your code here
     * This function should return a
     * vector with first element as
     * max and second element as 
     * second max
     * *******************************/
     for(int i=0;i<sizeOfArray;i++)
     {
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
    }
        else if(arr[i] > max2 && arr[i] != max)
        { //to make sure it is distinct
            max2 = arr[i];
        }
    }
    
    if(max2 == INT_MIN)
        max2 = -1;
    
    cout << max << " " << max2 << endl;
}
  

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
