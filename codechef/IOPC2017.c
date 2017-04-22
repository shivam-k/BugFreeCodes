#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(void)
{
	int n;
	scanf("%d\n", &n);
	float arr[n+1]; int i, j;
	for(i=1; i<=n; i++)
		scanf("%f", &arr[i]);
	
	// for(i=0; i<n; i++)
	// 	printf("%f\n", arr[i]);

	float f1=0.0, f2=0.0;  
	float sum=0.0; 
	float c=50.00;
	for(j=1; j<=n; j++)
	{
		f1=0.0, f2=0.0, sum=0.0;
		for(i=1; i<=n; i++)
		{
			if(j==i)
				continue;
			if(i<j)
				f1=f1+((c*arr[j]*arr[i])/pow((j-i), 2));
			if(i>j)
				f2=f2+((c*arr[j]*arr[i])/pow((i-j), 2));
		}
		sum = f1-f2;
	
		//rintf("%f %f\n", f1, f2);
		printf("%f\n", sum);
	}

	return 0;
}


