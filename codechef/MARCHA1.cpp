#include <iostream>
#include <cstdlib> 
using namespace std;

// int len;
// int l=0;
// int check(int m, int n)
// {
// 	if(arr[n]==m)
// 		return 1;
// 	if(n==0)
// 		return 0;
// 	else
// 		check(m, --n);
// 	cout<<arr[n]<<"\n";
// }

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[221];
		int n, m, i, temp=0, j, k, sum=0, pass=0;
		cin>>n>>m;
		for(i=0; i<n; i++)
		{
			cin>>arr[i];
			if(pass==0)
			{
				sum=sum+arr[i];
				if(arr[i]==m)
					pass=1;
				j=0;
				temp=0;
				while(j<=i)
				{
					if(arr[j]+arr[i]==m)
					{
						pass=1; break;
					}
		
					if(j!=0)
						temp=temp+arr[j-1];
					else
						temp=0;
					if(sum-temp==m)
					{
						pass=2; break;
					}
					j++;
					//cout<<arr[i]<<arr[j]+arr[i]<" "<<sum-temp<<" "<<sum;
				}
			}

		}
		
		if(pass==0)
			cout<<"No"<<"\n";
		else
			cout<<"Yes"<<"\n";
	}

	return 0;
}


