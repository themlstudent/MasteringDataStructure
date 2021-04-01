#include<iostram>
using namespace std;
int fact(int n)
{
	// base case
	int (n==0)
	{
		return 1;
	}
	return n*fact(n-1)
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
