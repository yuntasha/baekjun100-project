#include <stdio.h>

int main()
{
    int i,j,sum,k;
    int more=0;
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&k);
            sum+=k;
        }
        if(more<sum)
        {
            more=sum;
        }
    }
    printf("%d\n",more);
    return 0;
}