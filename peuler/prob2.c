#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int sum=0, a=1, b=2, esum=0;
	while(sum<=4000000)
	{
		//printf("%d %d\n", a, b);
		sum=a+b;
		if(b%2==0)
			esum=esum+b;
	
		a = b;
		b = sum;
	}
	printf("%d\n", esum);

	return 0;
}