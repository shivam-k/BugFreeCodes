#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int i, j, n, csoall=0, mincsoall=0, csod=0, mincsod=0, pass=0, temp, count;
	scanf("%d", &n);
	char str[1445];
	for(j=0; j<n; j++)
	{
		scanf("%s", str);
		int len = strlen(str);
		temp=0;
		count=0;
		for(i=0; i<len; i++)
		{
			if(str[i]=='C')
			{
				count++;
				temp++;
			}
			else
			{
				if(count>mincsod)
					mincsod=count;
				count=0;
				if(str[i]!='C' && pass==0)
				{
					if(temp>csoall)
						csoall = temp;
					temp=0;
				}
				else if(str[i]!='C' && pass==1)
				{
					mincsoall = mincsoall + temp;
					if(mincsoall>csoall)
						csoall=mincsoall;
					mincsoall=0; temp=0; pass=0;
				}
			}
		}
		if(str[len-1]=='C')
			pass=1;
		if(pass==1)
			mincsoall = mincsoall + temp;
		if(mincsod>csod)
		{
			csod=mincsod;
		}
		if(count!=0)
		{
			if(count>csod)
				csod=count;
			count=0;
		}
		mincsod=0;
	}
	if(pass==1)
	{
		if(mincsoall>csoall)
			csoall=mincsoall;
	}
	printf("%d %d\n",csod, csoall); 

	return 0;
}
