#include <iostream>
using namespace std;

void printToN(int n)
{
	if(n == 0)
		return;

	//cout<<n<<" ";
	
	printToN(n - 1);
    cout<<n<<" ";
}

int main() {
	
	int n = 5;
	
	printToN(n);
	
	return 0;
}
