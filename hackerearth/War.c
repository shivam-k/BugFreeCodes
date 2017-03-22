#include <stdio.h>
#include <string.h>

int main()
{
	int t, n, i, j, k, brr[100000], arr[100000], sum1, sum2;
	scanf("%d", &t);
	for(k=0; k<t; k++)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d", &brr[i]);
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		int max1, max2;
		max1 = brr[0];
		max2 = arr[0];
		for(i=0; i<n; i++)
		{
			if(brr[i] > max1)
				max1 = brr[i];
			else if(arr[i] > max2)
				max2 = arr[i];
		}
		if(max1>max2)
			printf("Bob\n");
		else if(max2>max1)
			printf("Alice\n");
		else if(max2==max1)
			printf("Tie\n");
	}

	return 0;
}

