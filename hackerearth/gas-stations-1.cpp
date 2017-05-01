#include <bits/stdc++.h>
using namespace std;


int main(void)
{

	int n, i, count;
	long long int x;
	cin>>n>>x;
	long long int arr[n];
	for(i=1; i<=n; i++)
		cin>>arr[i];
	
	long long int temp=x;
	for(i=1; i<=n; i++)
	{
		temp-=arr[i];
		if(temp<=0)
		{
			count=i;
			break;
		}
	}
	cout<<count<<"\n";

	return 0;
}


