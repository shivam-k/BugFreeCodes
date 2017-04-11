#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void bubble_sort(int arr[], int n)
{
	int pass=1, temp;
	while(pass>0)
	{
		pass=0;
		for(int i=0; i<n-1; i++)
		{
			if(arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				pass++;
			}
		}
	}
}

int fx(int arr[], int n, int x)
{
	int i=0, count=0;
	while(1)
	{
		if(arr[i]<x)
		{
			count++; i++;
		}
		else
			break;
	}
	return count;
}

int gx(int arr[], int n, int x)
{
	int i=n-1, count=0;
	while(1)
	{
		if(arr[i]>x)
		{
			count++; i--;
		}
		else
			break;
	}
	return count;
}

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i, a[100002], b[100002];

	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	bubble_sort(a, n);

	for(i=0; i<m; i++)
		scanf("%d", &b[i]);
	bubble_sort(b, m);

	int asum=0, bsum=0;

	for(i=0; i<((m>n)?m:n); i++)
	{
		if(i<n)
			asum = asum + (fx(b, m, a[i])*(gx(b, m, a[i])));
		if(i<m)
			bsum = bsum + (fx(a, n, b[i])*(gx(a, n, b[i])));
	}
	if(asum>bsum)
		printf("Monk %d\n", asum-bsum);
	else if(bsum<asum)
		printf("!Monk %d\n", bsum-asum);
	else if(bsum==asum)
		printf("Tie\n");

	return 0;
}