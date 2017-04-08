/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Ans- 6857

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int find_prime(unsigned long long int n)
{
	unsigned long long int i, pass=1;
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			pass=0; break;
		}
	}
	return pass;
}

int main(void)
{
	unsigned long long int n;
	unsigned long long int i=2, j, max=0, pass;
	scanf("%llu", &n);
	while(1)
	{
		pass=0;
		if(find_prime(i)==1)
			pass=1;
		
		if(pass==1)
		{
			if(n%i==0)
			{
				n=n/i;
				if(i>max)
					max=i;
				i=2;
			}
			else
				i++;
		}
		else
			i++;
		if(find_prime(n)==1)
		{
			if(n>max)
				max=n;
			break;
		}
	}
	printf("%llu\n", max);

	return 0;
}