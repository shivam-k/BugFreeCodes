#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(void)
{
	int n, i, j, count1=0, count2=0, pass=-1;
	char str1[1005], str2[1005];
	scanf("%d", &n);
	scanf("%s", str1);
	int len1 = strlen(str1);
	scanf("%s", str2);
	int len2 = strlen(str2);
	if(len1==len2)
	{
		for(i=97; i<=122; i++)
		{
			for(j=0; j<n; j++)
				if(str1[j]==i)
					count1++;
			for(j=0; j<n; j++)
				if(str2[j]==i)
					count2++;
			if(count1==count2)
			{
				pass=1;
				continue;
			}
			else
			{
				pass=0;
				break;
			}
		}
		if(pass==1)
			printf("YES\n");
		else if(pass==0)
			printf("NO\n");	
	}
	else
		printf("NO\n");
 

	return 0;
}


