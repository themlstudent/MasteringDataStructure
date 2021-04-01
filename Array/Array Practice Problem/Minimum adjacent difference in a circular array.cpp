
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
         int res = abs(arr[1] - arr[0]);
    for (int i = 2; i < n; i++)
        res = min(res, abs(arr[i] - arr[i - 1]));
  
    // Checking circular link
    res = min(res, abs(arr[n - 1] - arr[0]));
    return res;
    }

};

int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
