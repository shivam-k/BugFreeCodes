#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int p=1; p<=t; p++)
	{
		int m, i;
		scanf("%d", &m);
		int d[10005];
		unsigned long long int len[10005], num=0;
		for(i=0; i<m; i++)
			scanf("%llu %d", &len[i], &d[i]);
		for(i=0; i<m; i++)
		{
			num = num + (d[i]*len[i]);
		}
		//printf("new num = %llu\n", num);
		if(num>9)
		{
			while(num>9)
			{
				unsigned long long int temp = num, count=0, heap;
				while(temp>0)
				{
					heap = temp%10;
					temp = temp/10;
					count = count + heap;
				} 
				num = count;
				//printf("%llu\n", num);
			}
		}
		printf("%llu\n", num);
	}
	return 0;
}