#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int n, i, arr[1005], count=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]%3!=0)
			count++;
	}
	printf("%d\n", count);

	return 0;
}