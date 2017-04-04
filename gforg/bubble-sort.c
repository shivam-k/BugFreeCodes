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

void bubble_sort(int arr[], int n)
{
	int pass=1, temp;
	while(pass>0)
	{
		pass=0;
		for(int i=0; i<n-1; i++)
		{
			if(arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				pass++;
			}
		}
	}
}

int main(void)
{
	int arr[] = {5, 1, 4, 2, 8};
	int n=sizeof(arr)/sizeof(arr[0]);
	display(arr, n); printf("\n"); //before sorting
	bubble_sort(arr, n);
	display(arr, n); printf("\n");  //after sorting

	return 0;
}