#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, p;
	scanf("%d", &t);
	for(p=1; p<=t; p++)
	{	
		char str[100005], rstr[100005];
		scanf("%s", str);
		int i, j=0, len = strlen(str);
		for(i=len-1; i>=0; i--)
		{
			rstr[j] = str[i];
			j++;
		}
		for(i=0; i<len; i++)
		{
			int x1 = str[i] - 96;
			int x2 = rstr[i] - 96;
			int x3 = x1+x2;
			if(x3 <= 26)
			{
				printf("%c", 96+x3);
			}
			else if(x3 > 26)
			{
				int x4 = x3-26;
				printf("%c", x4+96);
				//printf("%d", x4); 
			}
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}