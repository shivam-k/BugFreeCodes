#include <iostream>
#include <cstdlib> 
#include <cstring>
using namespace std;

void sieve(int n)
{
	int i, j;
	bool arr[n+1];
	memset(arr, true, sizeof(arr));  //to assign true to all element
	for(i=2; i<=n; i++)
	{
		if(arr[i]==true)
		{
			for(j=i*2; j<=n; j+=i)
				arr[j]=false;
		}
	}
	for(i=2; i<=n; i++)
		if(arr[i])
			cout<<i<<"\n";

}

int main(void)
{
	int n;
	cin>>n;
	sieve(n);

	return 0;
}


