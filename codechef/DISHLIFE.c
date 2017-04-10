#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int arr[100002]={0};
		int n, k, j, count=0; 
		scanf("%d %d", &n, &k);

		for(j=0; j<n; j++) //islands 
		{
			int p, i, pass=0;
			scanf("%d", &p); //ingredients
			for (i=0; i<p; ++i)
			{
				int num;
				scanf("%d", &num);
				if(num<=k && num>=1 && arr[num-1]==0)
				{
					arr[num-1]=num;
					count++;
				}
				if(count==k)
				{
					pass=1; break;
				}
			}
			printf("%d\n", count);
			if(count==k && pass==1)
				break;
		}

		for(int mn=0; mn<k; mn++)
			printf("%d ", arr[mn]);
		printf("\n");
		
		if(count==k && j==n-1)
			printf("all\n");	
		else if(count<k)
			printf("sad\n");
		else if(count==k && j<n-1)
			printf("some\n");
	}

	return 0;
}