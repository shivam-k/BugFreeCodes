#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;


void bubble_sort(long long int arr[], long long int n)
{
	long long int pass=1, i, temp;
	while(pass>0)
	{
		pass=0;
		for(i=0; i<n-1; i++)
		{
			if(arr[i+1]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				pass=1;
			}
		}
	}
}

void display(long long int arr[], long long int n)
{
	long long int i;
	for(i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n, k, e, i, num, j;
		long long int m;
		cin>>n>>k>>e>>m;
		long long int arr[n-1];
		for(i=0; i<n-1; i++)
		{
			long long int tot=0;
			for(j=1; j<=e; j++)
			{
				cin>>num;
				tot = tot+num;
			}
			arr[i]=tot;
		}
		
		display(arr, n-1);
		bubble_sort(arr, n-1);
		display(arr, n-1);
	
		long long int sergey, snum=0; 
		for(i=1; i<e; i++)
		{
			cin>>sergey;
			snum=snum+sergey;
		}

		//cout<<snum<<"\n";

		if(arr[k-1]-snum>10)
			cout<<"Impossible"<<"\n";
		else
			cout<<(arr[k-1]-snum)+1<<"\n";
			
	}


	return 0;
}