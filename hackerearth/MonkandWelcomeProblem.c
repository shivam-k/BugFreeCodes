#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[100000], i, j, brr[100000], n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		scanf("%d", &brr[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]+brr[i]);
	}
	printf("\n");

	return 0;
}