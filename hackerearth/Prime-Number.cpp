#include <iostream>
#include <cstdlib> 
using namespace std;

int main(void)
{
	int n, i, j, count=0, pass=0;
	cin>>n;
	int arr[n];
	arr[0]=2;
	count++;
	for(i=3; i<n; i++)
	{
		pass=1;
		for(j=0; j<count; j++)
		{
			if(i%arr[j]==0)
			{
				pass=0; break;
			}
		}
		if(pass==1)
		{
			for(j=2; j<=i/2; j++)
			{
				if(i%j==0)
				{
					pass=0; break;
				}
			}
			if(pass==1)
			{
				arr[count]=i;
				count++;
			}
		}
	}
	for(i=0; i<count; i++)
		cout <<arr[i]<<" ";
	cout<<"\n";

	return 0;
}


