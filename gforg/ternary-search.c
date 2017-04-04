#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int ternary_search(int arr[], int l, int r, int x)
{
	int x1 = l + (r-l)/3;
	int x2 = r - (r-l)/3;
	if(arr[l]==x)
		return l;
	if(arr[r]==x)
		return r;
	if(arr[x1]==x)
		return x1;
	if(arr[x2]==x)
		return x2;
	if(x < arr[x1])
		return ternary_search(arr, l, x1-1, x);
	else if(x > arr[x2])
		return ternary_search(arr, x2+1, r, x);
	else
		return ternary_search(arr, x1+1, x2-1, x);
}

int main(void)
{
	int arr[] = {2, 3, 5, 6, 8, 9, 12, 13, 14};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x; 
	scanf("%d", &x);
	printf("%d\n", ternary_search(arr, 0, n, x));

	return 0;
}