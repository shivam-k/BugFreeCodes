#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x, y, i, j;
	x=y=0;
	char str[100005];
	scanf("%s", str);
	int len = strlen(str);
	for(i=0; i<len; i++)
	{
		switch(str[i])
		{
			case 'L':
				x = x - 1;
				break;
			case 'R':
				x = x + 1;
				break;
			case 'U':
				y = y + 1;
				break;
			case 'D':
				y = y - 1;
				break;
		}
	}
	printf("%d %d\n", x, y);

	return 0;
}