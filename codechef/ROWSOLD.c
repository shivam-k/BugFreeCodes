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
		char str[100005];
		scanf("%s", str);
		int len = strlen(str), pass=0, count=0;
		if(len==1)
			printf("0\n");
		else
		{
			int j=0, i=0, arr[100002]={-1}, k;
			while(1)
			{
				if(i==0)
					pass=0;
				if(str[i]=='1' && str[i+1]=='0')
				{
					count++;
					while(str[i+1]=='0')
					{
						str[i+1]='1';
						str[i]='0';
						count++; i++;
						pass=1;
					}
					arr[j]=i; j++;
				}
				else if(arr[0]!=-1)
				{	
					int k;
					for(k=0; k<j; k++)
					{
						if(str[arr[k]+1]=='0')
						{
							i=arr[k];
							j=0; break;
						}
					}
				}
				else
					i++;
				if(i==len-1)
				{
					if(pass==0)
						break;
					else
						i=0;
				}
			}
			printf("%d\n", count);
		}
 
	}
 
	return 0;
} 