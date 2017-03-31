// My solution to Binary Search without using recursion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int bisearch(int arr[], int n, int x)
{
	int i;
	int start=0, end=9, mid;   
	while(1)
	{
		if(arr[start]==x)
			return (start);
		if(arr[end]==x)
			return (end);
		if((end-start)%2==0)
			mid = ((end-start)/2) + start;
		else
			mid = ((end-start)/2) + 1 + start;
		if(arr[mid]==x)
			return (mid);
		if(arr[mid]<x)
			start=mid+1;
		if(arr[mid]>x)
			end=mid-1;
		if(start==end && arr[end]!=x)
			return -1;   //if element is not in array
	}
}

int main(void)
{
	int arr[]={2,5,8,12,16,23,38,56,72,91};   //array should be sorted
	int x; scanf("%d", &x);  //number to be searched in the array
	printf("%d\n", bisearch(arr, 10, x));

	return 0;
}