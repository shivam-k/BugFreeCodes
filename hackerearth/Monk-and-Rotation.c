#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, arr[100000], narr[100000], n, k, i, j, temp, p, m;
	scanf("%d", &t);
	for(j=0; j<t; j++)
	{
		scanf("%d %d", &n, &k);
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		if(k>n)
			k=k%n;
		p = n-k;
		m=0;
		for(i=p; i<n; i++)
		{
			narr[m] = arr[i];
			m++;
		}
		for(i=0; i<p; i++)
		{
			narr[m] = arr[i];
			m++;
		}

		for(i=0; i<m; i++)
			printf("%d ", narr[i]);
		printf("\n");
	}
	
	printf("\n");
	return 0;
}