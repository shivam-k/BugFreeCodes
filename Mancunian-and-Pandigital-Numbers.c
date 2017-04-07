#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void display(int arr[], int n)
{
	int i;;
	for(i=1; i<=n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void find(int l, int r)
{
	int temp=l, countl=0, countr=0, i, arrl[11], arrr[11];
	while(temp>0) //Calculating digits in l 
	{
		countl++;
		//arrl[countl] = temp%10;
		temp = temp/10;
	}
	temp=r;
	while(temp>0) //Calculating digits in r 
	{
		countr++;
		//arrr[countr] = temp%10;
		temp = temp/10;
	}
	if(countr<countl)
	{
		temp=countr;
		countr=countl;
		countl=temp;
	}
	for(i=1; i<=countr; i++)
	{
		if(i<=countl)
			arrl[i]=i;
		arrr[i]=i;
	}
	display(arrl, countl);
	display(arrr, countr);
	printf("\n");
	for(i=1; i<=countl; i++)
	{
		
	}
	// int bug=1;
	// while(bug>0)  //applying bubble sorting
	// {
	// 	bug=0;
	// 	for(i=1; i<count; i++)
	// 	{
	// 		if(arr[i+1]<arr[i])
	// 		{
	// 			temp=arr[i+1];
	// 			arr[i+1]=arr[i];
	// 			arr[i]=temp;
	// 			bug=1;
	// 		}
	// 	}
	// }

	// int pass=-1; 
	// for(i=1; i<=count; i++)
	// {
	// 	if(arr[i]==i)
	// 		pass=1;
	// 	else
	// 	{
	// 		pass=0; break;
	// 	}
	// }
	// return pass;
}


int main(void)
{
	int q;
	scanf("%d", &q);
	for(int i=0; i<q; i++)
	{
		int l, r, j, count=0;
		scanf("%d %d", &l, &r);
		// for(j=l; j<=r; j++) //checking one by one
		// {
		// 	if(find(j)==1)
		// 	{
		// 		count++;

		// 	}
		// }
		find(l, r);
		//printf("%d\n", count);
	}

	return 0;
}