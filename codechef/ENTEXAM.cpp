#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;


void selection_sort(long long int arr[], long long int n)
{
	for(int i=0; i<n; i++)
	{
		int min=i, temp;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]>arr[min])
				min=j;
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}

// void display(long long int arr[], long long int n)
// {
// 	long long int i;
// 	for(i=0; i<n; i++)
// 		cout<<arr[i]<<" ";
// 	cout<<"\n";
// }

int main(void)
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n, k, e, i, num, j;
		long long int m, tot, sergey, snum=0;
		cin>>n>>k>>e>>m;
		long long int arr[n+5];
		for(i=0; i<n-1; i++)
		{
			tot=0;
			for(j=1; j<=e; j++)
			{
				cin>>num;
				tot = tot+num;
			}
			arr[i]=tot;
		}
		
		//display(arr, n-1);
		selection_sort(arr, n-1);
		//display(arr, n-1);
	
		snum=0; 
		for(i=1; i<e; i++)
		{
			cin>>sergey;
			snum=snum+sergey;
		}

		//cout<<snum<<"\n";

		if(arr[k-1]-snum>=10)
			cout<<"Impossible\n";
		else
		{
			long long int temp=arr[k-1]-snum;
			if(temp<0)
				cout<<0<<"\n";
			else
				cout<<temp+1<<"\n";
		}
			
	}


	return 0;
}