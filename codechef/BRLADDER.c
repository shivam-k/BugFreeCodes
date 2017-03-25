#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int a, b, pass=0, min, temp;
		scanf("%d %d", &a, &b);
		min = a;
		if(b<min)
		{
			a = b;
			b = min;
		}
		//printf("%d %d\n", a, b);
		temp = a+1;
		if(temp==b && a%2!=0)
		{
			printf("YES\n");
			pass=1;
		}
		temp = a+2;
		//printf("%d %d\n", a, b);
		if(temp == b)
		{
			printf("YES\n");
			pass=1;
		}
		if(pass==0)
			printf("NO\n");

	}
	return 0;
}