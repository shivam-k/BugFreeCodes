#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int p=1; p<=t; p++)
	{
		char str[100005];
		scanf("%s", str);
		int len = strlen(str);
		int i, count=0;
		for(i=0; i<len; i++)
		{
			if(str[i]=='B')
			{
				if(str[i-2]=='W' && i>2)
				{
					str[i-2]=0;
					count++;
				}
				if(str[i-1]=='W' && i>1)
				{
					str[i-1]=0;
					count++;
				}
				if(str[i+1]=='W' && i<len-2)
				{
					str[i+1]=0;
					count++;
				}
				if(str[i+2]=='W' && i<len-1)
				{
					str[i+2]=0;
					count++;
				}
			}
		}
		printf("%d\n", count);
	}

	return 0;
}