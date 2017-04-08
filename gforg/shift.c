/*
   -- Program to rotate an array by xth position. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[]={9, 7, 6, 15, 16, 5, 10, 11};
	int i, n=sizeof(arr)/sizeof(arr[0]);
	display(arr, n);

	int x; //by xth position to rotate the array
	scanf("%d", &x);
	assert(x<n && x>0);   //to check the x on condition

	int temp, bug, pos, count=0; i=0;
	while(i<n)
	{
		if(i==0)
			temp=arr[i];
		pos=i+1;
		if(pos>n-1)
		{
			pos=0;
			count++;
		}

		bug=arr[pos];
		arr[pos]=temp;
		temp=bug;

		if(count==x)
			break;
		if(i==n-1)
			i=0;
		else
			i++;
	}
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}