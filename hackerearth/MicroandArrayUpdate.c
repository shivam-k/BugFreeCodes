#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int r, t;
	scanf("%d", &t);
	for(r=0; r<t; r++)
	{
		int n, k, i, min, arr[100005];
		scanf("%d %d", &n, &k);
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
			if(i==0)
				min = arr[0];
			if(arr[i]<min)
				min = arr[i];
		}
		// printf("%d\n", min);
		int time;
		if(k>=min)
			time = k-min;
		else
			time = 0;
		printf("%d\n", time);
	}

	return 0;
}
