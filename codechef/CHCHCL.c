#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int n, m, i, j, k, t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &m);
        if((n*m)%2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
 
    return 0;
}