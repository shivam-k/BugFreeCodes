#include <iostream>
#include <cstdlib> 
using namespace std;
 
 
int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int n, num, j, temp=0, arr[500], x, m=0, len=1;
		cin>>num;
		arr[0]=1;
		for(j=2; j<=num; j++)
		{
			temp=0;
			for(m=0; m<len; m++)
			{
				x=arr[m]*j+temp;
				arr[m]=x%10;
				temp=x/10;
			}
			while(temp>0)
			{
				arr[m]=temp%10;
				temp=temp/10;
				m++;
			}
			len=m;
		}
		for(j=len-1; j>=0; j--)
			cout<<arr[j];
 
		cout<<"\n";
		
	}
 
	return 0;
}