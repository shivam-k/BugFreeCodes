#include <iostream>
#include <cstdlib> 
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int n, i=1, fact=1;
		cin>>n;
		while(i<=n)
		{
			fact=fact*i;
			i++;
		}
		cout<<fact<<"\n";
	}

	return 0;
}


