#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, temp;
	scanf("%d", &n);

	int i, j;
	for(i=1; i<=n; i++)
	{
		temp=n-i;
		while(temp>0)
		{
			printf(" ");
			temp--;
		}
		temp=1;
		while(temp<=i)
		{
			printf("* ");
			temp++;
		}
		printf("\n");
	}
	for(i=n; i>=1; i--)
	{
		temp=n-i;
		while(temp>0)
		{
			printf(" ");
			temp--;
		}
		temp=1;
		while(temp<=i)
		{
			printf("* ");
			temp++;
		}
		printf("\n");
	}

	return 0;
}