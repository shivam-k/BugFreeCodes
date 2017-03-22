#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int r, t;
	scanf("%d", &t);
	for(r=0; r<t; r++)
	{
		int n, i, arr[100005], sum=0;
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		for(i=0; i<n; i++)
		{
			int j, len=i;
			while(len<n)
			{
				int col[100005]={-1}, k, count=1, weight, pass=-1;
				for(j=i; j<=len; j++)
				{
					for(k=0; k<count; k++)
					{
						if(col[k]==arr[j])
						{
							pass=1;
							break;
						}
						else
							pass=0;
					}
					if(pass==0)
					{
						col[count] = arr[j];
						count++;
					}
					else
						break;
				}
				if(pass==1)
					weight = 0;
				else
					weight = len-i+1;
				// printf("%d ", weight);
				// printf("\n");
				sum = sum + weight;
				len++;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}
