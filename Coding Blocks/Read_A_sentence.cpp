# include<iostream>
using namespace std;
// who to read a sentence / paragraph and store it 
//cin.get() reads asingle character 
// put a looop to read character till you get a new line '\n' 
void readline(char a[],int maxlen,char delim='\n')
{
	int i=0;
	char ch=cin.get();
	while(ch!=delim)
	{
		a[i]=ch;
		i++;
		if(i==(maxlen-1))
		{
			break;
		}
		ch=cin.get();
	}
// one out of the loop	
    a[i]='\0';
    return;
}
int main ()
{
	char a[100];
	readline(a,100,'$');
	// cin.getline(a,100,'$'); // At the place of writing so much code we can directly we
	                          // can use getline method
	cout<<a;
}
