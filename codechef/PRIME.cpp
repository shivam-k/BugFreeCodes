#include <iostream>
#include <cstdlib> 
using namespace std;

int main(void)
{
	int n, i, j, count=0, pass, sum;
	cin>>n;
	int arr[n];
	arr[0]=2;
	sum=2;
	count++;
	for(i=3; i<=n; i++)
	{
		pass=1;
		for(j=0; j<count; j++)
		{
			if(i%arr[j]==0)
			{
				pass=0; break;
			}
		}
		// if(pass==1)
		// {
		// 	for(j=2; j<=i/2; j++)
		// 	{
		// 		if(i%j==0)
		// 		{
		// 			pass=0; break;
		// 		}
		// 	}
		// 	if(pass==1)
		// 	{
		// 		arr[count]=i;
		// 		count++;
		// 		sum=sum+i;
		// 	}
		// }
		if(pass==1)
		{
			arr[count]=i;
			count++;
			sum=sum+i;
		}
	}
	for(i=0; i<count; i++)
	{
		cout<<arr[i]<<" ";
		//sum=sum+arr[i];
	}

	cout<<"\n"<<sum<<"\n";

	return 0;
}


