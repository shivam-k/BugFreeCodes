#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int bisearch(int arr[], int s, int n, int x)
{
	// if(s==n && arr[n]!=x)
	// 	return -1;  //not found in array
	if(arr[s]==x)
		return s;
	if(arr[n]==x)
		return n;
	int mid=s+((n-s)/2);
	if(arr[mid]>x)
		bisearch(arr, s, mid, x);
	else if(arr[mid]<=x)
		bisearch(arr, mid, n, x);
}

int main(void)
{
	int arr[]={2,5,8,12,16,23,38,56,72,91};   //array should be sorted
	int x; scanf("%d", &x);  //number to be searched in the array
	printf("%d\n", bisearch(arr, 0, 10, x));

	return 0;
}
