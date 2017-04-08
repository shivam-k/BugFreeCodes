#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int tc, r;
	scanf("%d", &tc);
	for(r=0; r<tc; r++)
	{
		int n, k;
		scanf("%d %d", &n, &k);
		int i, t, d, tdata=0, tcharge=0;
		for(i=0; i<n; i++)
		{
			scanf("%d %d", &t, &d);  
			if(k>t)
			{
				k = k-t;
			}
			else
			{
				tcharge = tcharge + (t-k)*d;
				k = 0;
			}
		}
		printf("%d\n", tcharge);
	}	

	return 0;
}


