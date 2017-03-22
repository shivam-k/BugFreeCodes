#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[100000];
	scanf("%s", str);
	int len = strlen(str);
	int max=0, count;
	for(int i=0; i<len; i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
				break;
			default:
				count=0;
		}
		if(count>max)
			max=count;
	}
	printf("%d", max);
	

	printf("\n");
	return 0;
}