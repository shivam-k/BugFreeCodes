#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int BinarySearch(int arr[], int min, int max, int data)
{
	int i, pass=0;
	for(i=min; i<max; i++)
		printf("arr[%d] = %d ", i,  arr[i]);
	printf("\n");
	for(i=min; i<max; i++)
	{
		if(arr[i]==data)
			pass=1;
	}
	int mid = (min+max)/2;
	if(pass==0)
		return -1;
	else if(arr[mid]==data)
		return mid;
	else
	{
		if(data > arr[mid])
			return BinarySearch(arr, mid, max, data);
		else
			return BinarySearch(arr, min, mid, data);
	}
}

int main()
{
	int arr[20], i, n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	int data;    //value that has to be searched in sorted array
	scanf("%d", &data);
	printf("Index = %d\n", BinarySearch(arr, 0, n, data));
	
	return 0;
}