#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int m, n, r, arr[10]={0}, temp;
	scanf("%d %d\n", &m, &n);
	arr[m]=1;
	for(r=0; r<n; r++)
	{
		int a, b, i;
		scanf("%d %d", &a, &b);
		if(a==m || b==m)
		{
			if(a==m)
			{
				arr[b] = 1;
				arr[a] = 0;
				m = b;
			}
			else
			{
				arr[a] = 1;
				arr[b] = 0;
				m = a;
			}
		}
	}
	printf("%d\n", m);

	return 0;
}
