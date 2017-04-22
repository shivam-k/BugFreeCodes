#include <iostream>
#include <cstdlib> 
using namespace std;
 
int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int n, i, j, max, min;
		cin>>n;
		int arr[n+2];
		max=0; min=0;
		for(i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]>max)
			{
				min=max;
				max=arr[i];
			}
			if(arr[i]<max && arr[i]>min)
				min=arr[i];
		}
		if(n==1)
			cout<<0<<"\n";
		else
		{
			//cout<<max<<" "<<min<<"\n";
			cout<<min%max<<"\n";
		}
	}
 
	return 0;
} 