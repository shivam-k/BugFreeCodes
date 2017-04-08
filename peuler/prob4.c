#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int palindrome(int n)
{
	int i, arr[7], temp, count=0;
	while(n>0)
	{
		temp=n%10;
		n=n/10;
		arr[count]=temp;
		count++;
	}
	// for(i=0; i<count; i++)
	// 	printf("%d\n", arr[i]);
	
	int pass=1; temp=count-1; i=0;
	while(temp!=i)
	{
		if(arr[temp]!=arr[i])
		{
			pass=0; break;
		}
		else
			pass=1;
	}
	return pass;
}

int main(void)
{
	int i, mul, max=1, j;
	for(i=999; i>=900; i--)
	{
		j=i;
		while(i-j<1)
		{
			if(palindrome(i*j)==1)
			{
				if(i*j>max)
					max=i*j;
			}
			j--;
		}
	}
	printf("%d\n", max);

	//palindrome(n);

	return 0;
}