#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int col[10];
int m=0, n=1;
void pan(int l)
{
	int i;
	if(l==1)
		return;
	else
		pan(--l);
	printf("%d\n", l);
	col[m]=l;
	l++;
}

int digit(int x)
{
	int temp=x, i=0;
	while(temp>0)
	{
		temp=temp/10;
		i++;
	}
	return i;
}

int main(void)
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int l, r, i;
		scanf("%d%d", &l, &r);
		int nl = digit(l); 
		int nr = digit(r);
		//printf("%d %d\n", nl, nr);
		pan(l+1);
	}

	return 0;
}