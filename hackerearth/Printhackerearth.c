#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[1000005];
	int n;
	scanf("%d", &n);
	scanf("%s", str);
	int i, len = strlen(str);
	int h=0, a=0, e=0, r=0, c=0, k=0, t=0, arr[7];
	for(i=0; i<len; i++)
	{
		switch(str[i])
		{
			case 'h':
				h++;
				break;
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'r':
				r++;
				break;
			case 'c':
				c++;
				break;
			case 'k':
				k++;
				break;
			case 't':
				t++;
				break;
			default:
				continue;
		}
	}
	
	arr[0] = h/2; 
	arr[1] = a/2; 
	arr[2] = e/2; 
	arr[3] = r/2; 
	arr[4] = c; 
	arr[5] = k; 
	arr[6] = t;
	int min = arr[1];
	for(i=0; i<7; i++)
	{
		if(arr[i]<min)
			min = arr[i];
		else
			continue;
	}
	printf("%d\n", min);


	return 0;
}

