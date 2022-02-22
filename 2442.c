#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i!=0)
            printf("\n");
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i&&j<=n+i)
            {
                printf("*");
            }
            else if(j<n-i)
            {
                printf(" ");
            }
        }
    }
    return 0;
}