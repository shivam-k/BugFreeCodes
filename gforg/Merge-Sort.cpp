#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int i, j;
	int col1[m-l+1], col2[r-m+1], len1, len2;
	len1=0;
	for(i=l; i<=m; i++)
	{
		col1[len1]=arr[i];
		len1++;
	}
	len2=0;
	for(i=m+1; i<=r; i++)
	{
		col2[len2]=arr[i];
		len2++;
	}
	int l1=0, l2=0; i=j;
	while(1)
	{
		arr[i]=col1[l1]>col2[l2]?col1[l1]:col2[l2];
		if(l1==len1 && l2==len2)
			break;
		++l1; ++l2; ++i;

	}
}

void merge_sort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}

void printlist(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	int arr[8]={38, 27, 43, 3, 9, 82, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	printlist(arr, n);
	merge_sort(arr, 0, n-1);
	printlist(arr, n);
	
	return 0;
}


