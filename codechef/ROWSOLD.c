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
		char str[100002];
		scanf("%s", str);
		int len = strlen(str), i, pass=0, count=0, temp=0;
		i=0;
		if(len==1)
		{
			printf("0\n");
			break;
		}
		while(1)
		{
			if(i==0)
				pass=0;
			if(str[i]=='1' && str[i+1]=='0')
			{
				count++;
				while(str[i+1]=='0')
				{
					str[i+1]='1';
					str[i]='0';
					count++; i++;
					pass=1;
				}
			}
			else
				i++;
			if(i==len-1)
			{
				if(pass==0)
					break;
				else
					i=0;
			}
		}
		printf("%d\n", count);

	}

	return 0;
}