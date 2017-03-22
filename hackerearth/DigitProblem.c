#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	long long unsigned x, mnum=0, mul=1;
	int i, temp, j, k, arr[100], n, len;
	scanf("%llu %d", &x, &k);
	j=0;
	if(k>0)
	{
		while(x>0)
		{
			temp = x%10;
			x = x/10;
			arr[j] = temp;
			j++;
		}
		n = 0;
		for(i=j-1; i>=0; i--)
		{
			if(arr[i]!=9)
			{
				arr[i]=9;
				n++;
			}
			if(n==k)
				break;
		}
		for(i=0; i<j;i++)
		{
			mnum = mnum + arr[i]*mul;
			mul = mul*10;
		}
		printf("%llu\n", mnum);
	}
	else
		printf("%llu\n", x);

	return 0;
}