#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int n, k, i, t, count=0;
   scanf("%d %d", &n, &k);
   for(i=0; i<n; i++)
   {
    scanf("%d", &t);
    if(t%k==0)
        count++;
   }
   printf("%d\n", count);
 
    return 0;
} 