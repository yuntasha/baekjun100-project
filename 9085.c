#include <stdio.h>

int main()//97
{
    int i,j,a,b,sum,c;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        sum=0;
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            scanf("%d",&c);
            sum+=c;
        }
        printf("%d\n",sum);
    }
    return 0;
}