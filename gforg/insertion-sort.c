#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void display(int arr[], int n)
{
	for(int i; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[]={9, 7, 6, 15, 16, 5, 10, 11};
	int n=sizeof(arr)/sizeof(arr[0]);

	display(arr, n);

	for(int i=1; i<n; i++)  //insertion-sort implementation
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j]<arr[i])
				continue;
			else
			{
				int temp;
				for(int k=j; k<i; k++)
				{
					temp=arr[k+1];
					arr[k+1]=arr[k];
					if(k==i-1)
						arr[j]=temp;
				}
			}
		}
	}

	for(int i; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}