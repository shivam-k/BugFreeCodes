#include <stdio.h>

int main()
{
    int max, min, n, arr[1000], pass, i, j, passpass;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    max= arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    for(i=min; i<=max; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==arr[j])
            {
                pass=1;
                break;
            }
            else
                pass=0;
        }
        if(pass==1)
            passpass=1;
        else
        {
            passpass=0;
            break;
        }
    }
    if(passpass==1)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
