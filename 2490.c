#include <stdio.h>

int main()
{
    int i,j,n;
    int sum[3]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&n);
            sum[i]+=n;
        }
        if(sum[i]==0)
            printf("D\n");
        else if(sum[i]==1)
            printf("C\n");
        else if(sum[i]==2)
            printf("B\n");
        else if(sum[i]==3)
            printf("A\n");
        else if(sum[i]==4)
            printf("E\n");
    }/*
    for(i=0;i<3;i++)
    {
        if(sum[i]==0)
            printf("E\n");
        else if(sum[i]==1)
            printf("A\n");
        else if(sum[i]==2)
            printf("B\n");
        else if(sum[i]==3)
            printf("C\n");
        else if(sum[i]==4)
            printf("D\n");
    }*/

    return 0;
}