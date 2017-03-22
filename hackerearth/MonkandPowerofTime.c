#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int n, i, co[105], io[105], count=0, temp;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &co[i]);
	for(i=0; i<n; i++)
		scanf("%d", &io[i]);
	while(1)
	{
		if(co[0]==io[0])
		{
			n = n-1;
			for(i=0; i<n; i++)
			{
				co[i] = co[i+1];
				io[i] = io[i+1];
			}
			count++;
		}
		else
		{
			while(co[0]!=io[0])
			{
				temp = co[0];
				for(i=0; i<n; i++)
				{
					if(i<n-1)
						co[i]=co[i+1];
					else
						co[i]=temp;
				}
				count++;
			}
		}
		if(n==1 && co[0]==io[0])
		{
			count++;
			break;
		}
	}
	printf("%d\n", count);

	return 0;
}
