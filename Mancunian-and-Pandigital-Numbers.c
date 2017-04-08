#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int a[2001]={0};


int main(void)
{
	int q, l, r, i, j, cnt, flag;
	scanf("%d", &q);
	for(i=1; i<=2000; i++)
	{
		int vis[10]={0};
		cnt=0;
		j=i;
		flag=1;
		while(j>0)
		{
			if(vis[j%10]==1)
			{
				flag=0;
				break;
			}
			vis[j%10]=1;
			j/=10;
			cnt++;
		}
		if(flag==1)
		{
			for(j=1; j<=cnt; j++)
			{
				if(vis[j]==0)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1)
			a[i]=a[i-1]+1;
		else
			a[i]=a[i-1];
	}

	for(i=1; i<=q; i++)
	{
		scanf("%d %d", &l, &r);
		printf("%d\n", a[r]-a[l-1]);
	}
	for(i=1; i<=1000000; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}