#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int t, r;
	scanf("%d", &t);
	for(r=0; r<t; r++)
	{
		int pass=0;
		unsigned long int n, i;
		scanf("%lu", &n);
		char str[n][10];
		for(i=0; i<n; i++)
		{
			scanf("%s", str[i]);
		}
		for(i=0; i<n; i++)
		{
			if(pass==1 && *str[i]=='m')
				pass=0;
			else if(pass==1 && *str[i]=='c')
			{
				pass=1;
				break;
			}
			if(*str[i]=='c')
				pass=1;
		}
		if(pass==1)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}
