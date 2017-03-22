#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int x, y, gcd;
void fgcd(int a, int b)
{
	int temp;
	if(a==0)
	{
		gcd = b;
		x = 0;
		y = 1;
	}
	else
	{
		fgcd(b%a, a);
		printf("%d %d\n", x, y);
		temp = x;
		x = y - (b/a)*x;
		y = temp; 
	}
}

int main()
{
	int a, b, temp;
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	fgcd(a, b);
	printf("%d %d %d\n", gcd, x, y);

	return 0;
}