#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, n, i, j, k, arr[1000][1000], p, q, count;
	scanf("%d", &t);
	for(j=1; j<=t; j++)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
			for(k=0; k<n; k++)
				scanf("%d", &arr[i][k]);
		count=0;
		for(i=0; i<n; i++)
		{
			for(k=0; k<n; k++)
			{
				for(p=0; p<=i; p++)
				{
					for(q=0; q<=k; q++)
					{
						if(arr[p][q]>arr[i][k])
						{
							++count;
						}
					}
				}
			}
		}
		printf("%d\n", count);
	}
	
	printf("\n");
	return 0;
}

/*
1 2 3
4 5 6
7 8 9
*/