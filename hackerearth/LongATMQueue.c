#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int n,i, arr[1000005], count=0, pass=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(i!=0)
		{
			if(arr[i]>arr[i-1])
			{
				pass=1;
				//continue;
			}
			else
			{
				//printf("%d\n", arr[i]);
				count++;
				pass=0;
			}
			if(i==n-1 && pass==0)
				pass=1;
		}
	}
	if(pass==1)
	{
		count++;
		//printf("%d\n", arr[i]);
		pass=0;
	}
	printf("%d\n", count);

	return 0;
}

