#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int biSearch(int arr[], int s, int n, int x)
{
	// if(s==n && arr[n]!=x)
	// 	return -1;  //not found in array
	if(arr[s]==x)
		return s;
	if(arr[n]==x)
		return n;
	int mid=s+((n-s)/2);
	if(arr[mid]>x)
		biSearch(arr, s, mid, x);
	else if(arr[mid]<=x)
		biSearch(arr, mid, n, x);
}

int expSearch(int arr[], int n, int x)
{
	if(arr[0]==x)
	{
		return 0;
	}
	int i=1;
	while(i<n && arr[i]<=x) 
	{
		i=i*2;
	}
	int val = biSearch(arr, i/2, n, x); 
	return val;
}


int main(void)
{
	int arr[]= {10, 20, 40, 45, 55};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x; scanf("%d", &x);

	printf("%d\n", expSearch(arr, n, x));

	return 0;
}