#include<iostream>
using namespace std;
 void primeSieve(long long int p[1000000],long long int n)
 {
    p[0] = p[1] = 0;
    p[2] = 1;

    for(long long int i=3;i<n;i+=2)
    {
        p[i] = 1;
    }

    for(long long int i=3;i<n;i+=2)
    {    
        if(p[i])
        {
            for(long long int j=i*i;j<n;j+=2*i)
            {
                p[j] = 0;
            }
        }
    }
    return;
}
int main() 
{
    long long int N = 1000000;
    long long int p[N];
    primeSieve(p,N);
  
	
		long long int n,i=0,ans,c=0;
		cin>>n;
	while(c<n)
        {if(p[i]==1)
        {
			c++;
			ans=i;
            
        }
		i++;
    }
    cout<<ans<<endl;	

	}
