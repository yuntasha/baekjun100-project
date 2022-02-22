#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<2*n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)%2==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}