#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int min_mana(long long int x, long long int l, long int n)
{
	if(n==0)
		return 0;
	
	int mana=0;
	while(1)
	{
		int mul=pow(2, n-1);
		if(mul*x<=l)
			return mana;
		else
		{
			mana++; x--;
		}
	}
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int x, l, n;
		scanf("%lld %lld %lld", &x, &l, &n);
		//have to find out the minimum mana points to let her pass the exam

		// she need to have x<=l after 2nd last visit- then she will pass the exam
		printf("%d\n", min_mana(x, l, n));		
	}

	return 0;
}