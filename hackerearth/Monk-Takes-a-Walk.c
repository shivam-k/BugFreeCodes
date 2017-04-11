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
		char str[100001];
		scanf("%s", str);
		int i, count=0, len=strlen(str);
		for(i=0; i<len; i++)
		{
			switch(str[i])
			{
				case 'A':
					count++;
					break;
				case 'E':
					count++;
					break;
				case 'I':
					count++;
					break;
				case 'O':
					count++;
					break;
				case 'U':
					count++;
					break;
				case 'a':
					count++;
					break;
				case 'e':
					count++;
					break;
				case 'i':
					count++;
					break;
				case 'o':
					count++;
					break;
				case 'u':
					count++;
					break;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}