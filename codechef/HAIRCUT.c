#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, a, b, i, j, arr[150002], max;
		scanf("%d %d %d", n, a, b);
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		for(i=0; i<n; i++)
		{
			if(arr[i]-a<0)
				continue;
			int temp = arr[i]-a;
			int data = i;
			while()
			{
				if(arr[data]>=a+temp && arr[data]<=b+temp)
				{
					max++;
					data++;
				}
				if(data==n-1)
					break;
			}
		}
	}

	return 0;
}