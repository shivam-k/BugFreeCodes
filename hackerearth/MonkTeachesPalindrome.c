#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, i, j, k, len, pass;
	char str[100000];
	scanf("%d", &t);
	for(j=1; j<=t; j++)
	{
		scanf("%s", str);
		len = strlen(str);
		k=len-1;
		for(i=0; i<len; i++)
		{
			if(str[i]==str[k])
				pass=1;
			else
			{
				pass=0;
				break;
			}
			k--;
		}
		if(pass==1)
		{
			printf("YES ");
			if(len%2==0)
				printf("EVEN");
			else
				printf("ODD");
		}
		else
			printf("NO");
		printf("\n");
	}
	
	printf("\n");
	return 0;
}