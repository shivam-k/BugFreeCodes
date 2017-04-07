#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void display(int arr[], int n)
{
	for(int i=1; i<=n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int n, i, arr[400000];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		arr[i]=i;
	display(arr, n);

	return 0;
}