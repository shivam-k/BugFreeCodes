#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int interpolation(int arr[], int n, int x)
{
	int pos, i, low=0, high=n-1;
	while(low!=high)
	{
		pos = low + ((x-arr[low])*(high-low)/(arr[high]-arr[low]));
		if(arr[pos]==x)
			return pos;
		else if(arr[pos]<x)
			low = pos+1;
		else if(arr[pos]>x)
			high = pos-1;
	}
	return -1;
}

int main(void)
{
	int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};	
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	scanf("%d", &x);
	printf("%d\n", interpolation(arr, n, x));

	return 0;
}