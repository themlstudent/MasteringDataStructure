#include<bits/stdc++.h>
using namespace std;

int median(int A[],int N)
{
    
    sort(A,A+N);
    
     if (N % 2 != 0) 
        return (floor) (A[N / 2]); 
  
    return (floor)(A[(N - 1) / 2] + A[ N/ 2]) / 2.0;
    
    
}

int mean(int A[],int N)
{
    //your code here
   int meansum=0;
    for(int i=0;i<N;i++)
    {
        meansum+=A[i];
    }
    
    return (floor)(meansum/N) ;
}

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        //calling mean() and median() functions
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}

