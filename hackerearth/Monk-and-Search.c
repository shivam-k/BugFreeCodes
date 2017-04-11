#include <stdio.h>
#include <stdlib.h>

int n1=0, n2=0;

void bubble_sort(int arr[], int n)
{
	int pass=1, temp;
	while(pass>0)
	{
		pass=0;
		for(int i=0; i<n-1; i++)
		{
			if(arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				pass++;
			}
		}
	}
}


int main()
{
    int n, arr[100001], i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    bubble_sort(arr, n);

    int q, a, b, pass, mid;
    scanf("%d", &q);
	int l=0, r=n-1;
    for(i=0; i<q; i++)
    {
    	pass=0;
    	scanf("%d %d", &a, &b);
    	if(b<arr[l])
    		printf("%d\n", n);
    	else if(b>arr[r])
    	{
    		printf("%d\n", 0);
    	}
    	else
    	{
	    	while(1)
	    	{
	    		if(arr[l]==b)
	    		{
	    			pass=(n-l); break;
	    		}
	    		else if(arr[r]==b)
	    		{
	    			pass=1; break;
	    		}
	    		else if(r==l+1)
	    		{
	    			printf("%d\n", n-r+1);
	    			pass=-1; 
	    			break;
	    		}
	    		mid=(r-l)/2;
	    		if(b>arr[mid])
	    			l=mid+1; 
	    		else if(b<arr[mid])
	    			r=mid-1;
	    		else
	    		{
	    			pass=n+1-mid; break;
	    		}
	    	}
	    	if(pass==-1);
	    	else
	    	{
		    	if(a==0)
		    		printf("%d\n", pass);
		    	if(a==1)
		    		printf("%d\n", pass-1);
	    	}
    	}
    }
    
    return 0;
}
