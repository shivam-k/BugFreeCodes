#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[]={9, 7, 6, 15, 16, 5, 10, 11};
	int n=sizeof(arr)/sizeof(arr[0]);

	display(arr, n);

	int i, j, k;
	for(i=1; i<n; i++)  //insertion-sort implementation
	{
		for(j=0; j<i; j++)
		{
			if(arr[i]<arr[j])
			{
				int temp, bug, pos; k=j;
				while(k<=i)
				{
					pos=k+1;
					if(k==j)
						temp=arr[j]; 
					if(k==i)
						pos=j;
					bug=arr[pos];
					arr[pos]=temp;
					temp=bug;
					if(k==i)
						break;
					else
						k++;

				}
			}
		}
	}

	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}