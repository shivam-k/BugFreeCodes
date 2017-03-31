// Linear Search

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int search(int arr[], int n, int x)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i]==x)
			return i;
	}
	return -1; //number given by user not found in the array 
}

int main(void)
{
	int arr[5]={5,4,8,9,6};
	int x;
	scanf("%d", &x); //number to search from the array element
	printf("%d\n", search(arr, 5, x));

	return 0;
}