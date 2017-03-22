#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[1005];
	scanf("%s", str);
	int len = strlen(str);
	int i, sum=0;
	for(int i=0; i<len; i++)
	{
		sum = sum + str[i]-97 + 1;
	}
	printf("%d\n", sum);
	
	return 0;
}