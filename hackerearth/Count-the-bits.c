#include <stdio.h>

int main()
{
    int t, n, i, j, k, temp, arr[2000], count;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
    	scanf("%d", &n);
    	j=0;
    	while(n!=0)
    	{
    		temp = n%2;
    		n = n/2;
    		arr[j] = temp;
    		j++;
    	}
    	count=0;
    	for(k=j-1; k>=0; k--)
    	{
    		if(arr[k]==1)
    			count++;
    	}
    	printf("\n%d\n", count);
    	
    }
    return 0;
}
