#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		char str1[5][11], str2[5][11];
		int i, j;
		for(i=0; i<4; i++)
			scanf("%s", str1[i]);
		for(i=0; i<4; i++)
			scanf("%s", str2[i]);

		// int len1 = strlen(str1);
		// int len2 = strlen(str2);

		int count=0, temp, k;
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				temp = strcmp(str1[i], str2[j]);
				if(temp==0)
				{
					count++;
					//printf("%s\n", str1[i]);
					break;
				}
			}
			if(count>=2)
				break;
		}
		if(count>=2)
			printf("similar\n");
		else
			printf("dissimilar\n");
	}
	
	return 0;
}