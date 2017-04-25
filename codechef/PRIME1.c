#include <iostream>
#include <cstdlib> 
#include <cstring>
#include <cmath>
using namespace std;


int check(long int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	int temp=sqrt(n);
	for(int i=2; i<=temp; i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int m, n, i, j;
		cin>>m>>n;
		for(i=m; i<=n; i++)
		{
			if(check(i)==1)
				cout<<i<<"\n";
		}
	}

	return 0;
}

