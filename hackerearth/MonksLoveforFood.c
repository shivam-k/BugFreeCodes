#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int q, i;
	scanf("%d", &q);
	int typeone, typetwo, arr[100005], count=0;
	arr[0] = -1;
	for(i=0; i<q; i++)
	{
		int n;
		scanf("%d", &n);
		if(n==1)
		{
			if(arr[count]<0)
				printf("No Food\n");
			else
			{
				printf("%d\n", arr[count]);
				arr[count] = -1;
				count = count-1;
			}
		}
		else
		{
			int c;
			scanf("%d", &c);
			count++;
			arr[count] = c;
		}
	}

	return 0;
}
