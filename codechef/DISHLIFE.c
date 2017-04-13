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
		int arr[100005]={0};
		int n, k, j, i, count=0, pass=0, temp=0; 
		scanf("%d %d", &n, &k);

		for(j=0; j<n; j++) //islands 
		{
			int p, num;
			scanf("%d", &p); //ingredients
			for (i=0; i<p; ++i)
			{
				scanf("%d", &num);
				if(num<=k && num>=1 && arr[num-1]==0)
				{
					arr[num-1]=num;
					count++;
				}
			}
			if(pass==0)
			{
				if(count==k && j==n-1)
					pass=1;
				if(count==k && j<n-1)
					pass=-1;
			}
		}

		if(count==k && pass==1)
			printf("all\n");	
		else if(count==k && pass==-1)
			printf("some\n");
		else if(count<k && pass==0)
			printf("sad\n");
	}

	return 0;
}