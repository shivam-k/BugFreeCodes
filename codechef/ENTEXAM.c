#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void bubble_sort(int arr[], int n)
{
	int pass=1, i, temp;
	while(pass>0)
	{
		pass=0;
		for(i=0; i<n-1; i++)
		{
			if(arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				pass=1;
			}
		}
	}
}

void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k, e, i, arr[10005], num, j;
		long int m;
		scanf("%d %d %d %ld", &n, &k, &e, &m);
		for(i=0; i<n-1; i++)
		{
			int tot=0;
			for(j=1; j<=e; j++)
			{
				scanf("%d", &num);
				tot = tot+num;
			}
			arr[i]=tot;
		}
		//display(arr, n-1);
		bubble_sort(arr, n-1);
		//display(arr, n-1);

		int sergey, snum=0; 
		for(i=1; i<e; i++)
		{
			scanf("%d", &sergey);
			snum=snum+sergey;
		}

		if(arr[k-1]>snum+10)
			printf("Impossible\n");
		if(arr[k-1]<snum)
			printf("0\n");
		else if(arr[k-1]<snum+10 && arr[k-1]>snum)
			printf("%d\n", (arr[k-1]-snum)+1);
	}


	return 0;
}