#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


/* time complexity of Jump Search O(√ n). */

int jumpSearch(int arr[], int n, int x)
{
	int step_size = sqrt(n);    // best step size is m = √n.

	for(int i=0; i<n; i+=4)
	{
		if(arr[i]<x)
			continue;
		else if(arr[i]==x)
			return i;
		else if(arr[i]>x)
		{
			int pass=-1;
			for(int j=i-4; j<i; j++)
			{
				if(arr[j]==x)
					return j; 
				else
					pass=0;
			}
			if(pass==0)
				return -1;
		}
	}
}

int main(void)
{
	int arr[]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
	int n;
	scanf("%d", &n);    //number to be searched
	printf("%d\n", jumpSearch(arr, 16, n));

	return 0;
}