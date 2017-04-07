#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>

void display(int arr[], int n)
{
	for(int i; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[]={9, 7, 6, 15, 16, 5, 10, 11};
	int i, n=sizeof(arr)/sizeof(arr[0]);
	display(arr, n);

	int x; // xth position to roll in array
	scanf("%d", &x);
	//assert(x<n && x>0);

	int temp, pos;
	for(i=0; i<n; i++)
	{
		
	}
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}