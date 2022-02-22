#include <stdio.h>

int main()
{
    int a[100][100]={0};
    int n,x,y,i,j,k;
    int sum=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d %d",&x,&y);
        for(i=x;i<x+10;i++)
        {
            for(j=y;j<y+10;j++)
            {
                a[i][j]=1;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d\n",sum);
    return 0;
}