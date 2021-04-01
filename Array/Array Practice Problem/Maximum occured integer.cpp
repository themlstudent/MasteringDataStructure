
#include <bits/stdc++.h>
using namespace std;


#define MAX 1000000
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        int arr[MAX];
    memset(arr, 0, sizeof arr);
  
    // Adding +1 at Li index and substracting 1
    // at Ri index.
    int maxi=-1;
    for (int i = 0; i < n; i++) {
        arr[L[i]] += 1;
        arr[R[i] + 1] -= 1;
        if(R[i]>maxi){
            maxi=R[i];
        }
    }
  
    // Finding prefix sum and index having maximum
    // prefix sum.
    int msum = arr[0],ind;
    for (int i = 1; i < maxi+1; i++) {
        arr[i] += arr[i - 1];
        if (msum < arr[i]) {
            msum = arr[i];
            ind = i;
        }
    }
  
    return ind;
}
        
    
};


int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  


