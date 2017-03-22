#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[105];
	scanf("%s", str);
	int count, max=0, pass=0, len = strlen(str), temp;
	for(int i=0; i<len; i++)
	{
		if(str[i]=='1')
		{
			int j=i, count=0;
			while(str[j]=='1')
			{
				count++;
				j++;
				if(count==6)
				{
					temp=0; 
					break;
				}
				else
					temp=1;
			}
			if(temp==0)
			{
				pass=0;
				break;
			}
			else
				pass=1;
		}
		else
		{
			int j=i, count=0;
			while(str[j]=='0')
			{
				count++;
				j++;
				if(count==6)
				{
					temp=0; 
					break;
				}
				else
					temp=1;
			}
			if(temp==0)
			{
				pass=0;
				break;
			}
			else
				pass=1;
		}
	}
	if(pass==1)
		printf("Good luck!\n");
	else
		printf("Sorry, sorry!\n");


	return 0;
}