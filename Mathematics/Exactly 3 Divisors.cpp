//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int exactly3Divisors(int N){
    int root = sqrt(N);
    bool isprime[root+1];
    memset(isprime, true, sizeof(isprime));
    
    for(int i = 2; i * i <= root; i++){
        if(isprime[i]){
            for(int j = i * i; j <= root; j = j + i){
                isprime[j] = false;
            }
        }
    }
    int cnt = 0;
    for(int i = 2; i <= root; i++){
        if(isprime[i]) cnt++;
    }
    return cnt;
}







// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
