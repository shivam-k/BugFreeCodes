#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	char str[1000005];
	scanf("%s", str);
	int len = strlen(str);
	int h, a, c, k, e, r, t = h = a = c = k = e = r = 0;
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
			case 'r':
				r++;
				break;
			case 'e':
				e++;
				break;
			case 'c':
				c++;
				break;
			case 'k':
				k++;
				break;
			case 't':
				++t;
				break;
		}
	}
	if(h>=2)
		h = h/2;
	if(a>=2)
		a = a/2;
	if(r>=2)
		r = r/2;
	if(e>=2)
		e = e/2;
	int arr[7];
	arr[0] = h; arr[1] = a; arr[2] = r; arr[3] = e; arr[4] = c; arr[5] = k; arr[6] = t; 
	int min = arr[0];
	for(i=0; i<7; i++)
	{
		if(arr[i]<min)
			min = arr[i];
	}
	printf("%d\n", min);


	return 0;
}