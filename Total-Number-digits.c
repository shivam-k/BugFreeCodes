#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


// int digit(int x)
// {
// 	int temp=x, i=0;
// 	while(temp>0)
// 	{
// 		temp=temp/10;
// 		i++;
// 	}
// 	return i;
// }

int main(void)
{
	int n, m, i, j, sum=0, temp, arr[10];
	scanf("%d", &n);  //between 1 nad 9
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	for(i=0; i<n; i++)
	{
		j=0;
		sum=sum+arr[i];
		printf("last digint- %d\n", arr[i]);
		while(j<i)
		{
			printf("two sum- %d\n", arr[i]+arr[j]);
			if(j!=0)
				temp=temp+arr[j-1];
			else
				temp=0;
			printf("mid sum- %d\n", sum-temp);
			j++;
		}
	}

	return 0;
}