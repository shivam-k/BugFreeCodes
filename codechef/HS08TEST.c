#include <stdio.h>
int main() 
{
        int n;
        float total, left;
        scanf("%d", &n);
        scanf("%f", &total);
        if(n%5==0) 
        {
            if(total==n+0.5 || total > (n+0.5))
                printf("%.2f\n", (total-n-0.5));
            else
                printf("%.2f\n", total);
        }
        else
            printf("%.2f\n", total);
 
    return 0;
}  