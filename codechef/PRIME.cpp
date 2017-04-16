#include <iostream>
#include <cstdlib> 
using namespace std;

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, i, j, count=0, pass, sum=1;
		cin>>n;
		
		for(i=1; i<=n; i++)
			sum=sum*i;
		cout<<sum<<"\n";
	}

	return 0;
}


