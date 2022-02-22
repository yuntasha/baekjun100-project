#include<stdio.h>

int main()
{
	int num[300][300];
    int a,b;
    int i,j;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    int X,I,Y,J,k;
    int sum=0;
    for(k=0;k<n;k++)
    {
        sum=0;
        scanf("%d %d %d %d",&I,&J,&X,&Y);
        I--;
        J--;
        X--;
        Y--;
        for(i=I;i<=X;i++)
        {
            for(j=J;j<=Y;j++)
            {
                sum+=num[i][j];
            }
        }
        printf("%d\n",sum);
    }
    
	return 0;
}