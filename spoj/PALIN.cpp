#include <iostream>
#include <cstdlib> 
#include <cstring>
#include <cmath>
using namespace std;

int check(long long int n)
{
	long long int temp=n, len=0, arr[1000000];
	while(temp>0)
	{
		arr[len]=temp%10;
		temp=temp/10; 
		len++;
	}
	long long int i=0;
	temp=len-1;
	while(i<=temp-i)
	{
		if(arr[i]!=arr[temp-i])
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k;
		cin>>k;
		long long int temp=k+1;
		while(1)
		{
			if(check(temp)==1)
			{
				cout<<temp<<"\n";
				break;
			}
			temp++;
		}
		
	}


	return 0;
}

