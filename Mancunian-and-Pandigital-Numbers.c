#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int find(int n)
{
	int temp=n, count=0, i, arr[11];
	while(temp>0)
	{
		count++;
		arr[count] = temp%10;
		temp = temp/10;
	}
	for(i=1; i<=count; i++)
	{
		int min=arr[i];
		for(int j=i; j<=count; j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
	int pass=-1;
	for(i=1; i<=count; i++)
	{
		if(arr[i]==i)
			pass=1;
		else
		{
			pass=0; break;
		}
	}
	return pass;
}

int main(void)
{
	int q;
	scanf("%d", &q);
	for(int i=0; i<q; i++)
	{
		int l, r, j, count=0;
		scanf("%d %d", &l, &r);
		for(j=l; j<=r; j++)
		{
			if(find(j)==1)
				count++;
		}
		printf("%d\n", count);
	}

	return 0;
}