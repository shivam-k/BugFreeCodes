#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Time Complexity: O(n2) as there are two nested loops. */

void display(int arr[], int n)
{
	for(int i=0; i<n ;i++)
		printf("%d ", arr[i]);
}

void selection_sort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		int min=i, temp;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}

int main(void)
{
	int arr[] = {64, 25, 12, 22, 11};
	int n=sizeof(arr)/sizeof(arr[0]);
	display(arr, n); printf("\n"); //before sorting
	selection_sort(arr, n);
	display(arr, n); printf("\n");  //after sorting

	return 0;
}