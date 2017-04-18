#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;
 
 
int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int n, count=0, temp, i;
		cin>>n;
		
		i=1;
 
		while(pow(5, i)<=n)
		{
			count=count+(n/pow(5, i));
			i++;
		}
 
		cout<<count<<"\n";
		
	}
 
	return 0;
}
 