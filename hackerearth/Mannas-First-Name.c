#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char str[155], str1[] = "SUVOJIT";
		scanf("%s", str);
		int i, suvo=0, suvojit=0, len = strlen(str), len1=strlen(str1);	
		for(i=0; i<len; i++)
		{
			int pass=-1, temp=0;
			if(str[i]==str1[0])
			{
				int k=i;
				for(int j=0; j<len1; j++)
				{
					if(str[k]==str1[j])
					{
						temp++;
						pass=1;
						k++;
						continue;
					}
					else
					{
						pass=0;
						break;
					}
				}
			}
			if(temp>=4 && temp<7)
				suvo++;
			if(temp==7)
				suvojit++;

		}
		printf("SUVO = %d, SUVOJIT = %d\n", suvo, suvojit);

	}

	return 0;
}
