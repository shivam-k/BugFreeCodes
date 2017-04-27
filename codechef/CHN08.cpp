#include <iostream>
#include <cstdlib> 
using namespace std;
long long int M = 1000000007;

long long int find(long long int a, long long int b, long long int n)
{
	if(n==a)
		return a;
	if(n==b)
		return b;
	long long int temp;
	temp=n%6;
	switch(temp)
	{
		case 1:
			return a;
		case 2:
			return b;
		case 3:
			return b-a;
		case 4:
			return -a;
		case 5:
			return -b;
		case 0:
			return a-b;
	}
}

int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int a, b, n, temp;
		cin>>a>>b>>n;
		temp=find(a, b, n)%M;
		if(temp<0)
			temp=temp+M;
		cout<<temp<<"\n";

	}

	return 0;
}


