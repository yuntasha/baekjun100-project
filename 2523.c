#include <stdio.h>

int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        if(i>n)
        {
            for(j=0;j<2*n-i;j++)
                printf("*");
        }
        else
        {
            for(j=0;j<i;j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}