#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, i, arr[100005], max, j, sum1=0, sum2=0;
	scanf("%d", &n);
	if(n==0 || n<0)
		printf("0\n");
	else
	{
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		max=-1;
		sum2=0;
		for(i=0; i<n; i++)
		{
			sum1 = 0;
			for(j=i; j<n; j++)
			{
				sum1 = sum1 + arr[j];
				if(sum1>sum2)
					sum2=sum1;
			}
			if(sum2>max)
				max=sum2;
		}
		printf("%d\n", max);
	} 

	return 0;
}
