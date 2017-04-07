#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int sum1=0, sum2=0, sum3=0, i, temp=1000, end1=0, end2=0, end3=0;
	while(--temp)
	{
		if(temp%3==0 && end1==0)
			end1=temp;
		if(temp%5==0 && end2==0)
			end2=temp;
		if(temp%3==0 && temp%5==0 && end3==0)
			end3=temp;
		if(end1!=0 && end2!=0 && end3!=0)
			break;
	}
	printf("%d %d %d\n", end1, end2, end3);
	int num1 = end1/3, num2=end2/5, num3=end3/15;
	sum1 = (3*num1*(num1+1))/2;
	sum2 = (5*num2*(num2+1))/2;
	sum3 = (15*num3*(num3+1))/2;
	
	printf("%d\n", sum1+sum2-sum3);
	return 0;
}