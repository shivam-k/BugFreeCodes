#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[100000], i, j, k, n, count;
	long long unsigned sum;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<3; i++)
	{
		count=0;
		sum =0;
		for(j=i; j<n; j=j+3)
		{
			sum = sum + arr[j];
		}
		printf("%llu ", sum);
	}

	printf("\n");
	return 0;
}