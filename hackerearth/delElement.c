#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int del(int arr[], int n, int d)
{
	int i, pos=0;
	for(i=0; i<n; i++)
		if(arr[i]==d)
			pos = i;
	if(pos==0)
	{
		printf("%d is not in specified array\n", d);
		return n;
	}
	else
	{
		for(i=pos; i<n; i++)
			arr[i] = arr[i+1];
		return n-1;
	}

}
int main()
{
	int arr[20], n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("Array before deleting any element: \n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	int d;
	scanf("%d", &d);
	n = del(arr, n, d);
	printf("Array after deleting any element: \n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}