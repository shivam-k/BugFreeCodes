#include <bits/stdc++.h>
using namespace std;


long long int gcd(long long int a, long long int b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}

long long int lcd(int arr[], int n)
{
	long long int ans=1;
	int i;

	for(i=0; i<n; i++)
		ans=(arr[i]*ans)/(gcd(arr[i], ans));
	return ans;
}

int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n], i, k, pass, max=0;
		for(i=0; i<n; i++)
			cin>>arr[i];
		int x=sizeof(arr)/sizeof(arr[0]);
		long long int y=lcd(arr, x);
		cout<<y<<"\n";
	}

	return 0;
}


