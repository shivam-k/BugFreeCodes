#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int prime(int);
int main()
{
	int t, r;
	scanf("%d", &t);
	for(r=0; r<t; r++)
	{
		int brr[20], srr[20], i, len1, len2;
		int j=0;
		for(i=65; i<=90; i++)
		{
			if(prime(i)==1)
			{
				brr[j]=i;
				j++;
			}
		}
		len1 = j;
		j = 0;
		for(i=97; i<=122; i++)
		{
			if(prime(i)==1)
			{
				srr[j]=i;
				j++;
			}
		}
		len2 = j;
		char str[505];
		int n;
		scanf("%d", &n);
		scanf("%s", str);
		int len = strlen(str);
		for(i=0; i<len; i++)
		{
			if(str[i]<=90)
			{
				for(j=0; j<len1; j++)
				{
					if(brr[0]>=str[i])
					{
						printf("%c", brr[0]);
						break;
					}
					else if(str[i]>=brr[len1-1])
					{
						printf("%c", brr[len1-1]);
						break;
					}
					else if(brr[j]==str[i])
					{
						printf("%c", brr[j]);
						break;
					}
					else
					{
						if(brr[j]>str[i])
						{
							if((brr[j]-str[i]) == (str[i]-brr[j-1]))
							{
								printf("%c", brr[j-1]);
								break;
							}
							else if((brr[j]-str[i]) > (str[i]-brr[j-1]))
							{
								printf("%c", brr[j-1]);
								break;
							}
							else if((brr[j]-str[i]) < (str[i]-brr[j-1]))
							{
								printf("%c", brr[j]);
								break;
							}
						}
					}
				}
			}

			else if(str[i]>=97)
			{
				for(j=0; j<len2; j++)
				{
					if(srr[0]>=str[i])
					{
						printf("%c", srr[0]);
						break;
					}
					else if(str[i]>=srr[len2-1])
					{
						printf("%c", srr[len2-1]);
						break;
					}
					else if(srr[j]==str[i])
					{
						printf("%c", srr[j]);
						break;
					}
					else
					{
						if(srr[j]>str[i])
						{
							if((srr[j]-str[i]) == (str[i]-srr[j-1]))
							{
								printf("%c", srr[j-1]);
								break;
							}
							else if((srr[j]-str[i]) > (str[i]-srr[j-1]))
							{
								printf("%c", srr[j-1]);
								break;
							}
							else if((srr[j]-str[i]) < (str[i]-srr[j-1]))
							{
								printf("%c", srr[j]);
								break;
							}
						}
					}
				}
			}
		}
		printf("\n");

	}
	printf("\n");

	return 0;
}

int prime(int n)
{
	int pass, i;
	for(i=2; i<n; i++)
	{
		if(n%i!=0)
			pass=1;
		else
		{
			pass=0;
			break;
		} 
	}
	return (pass);
}