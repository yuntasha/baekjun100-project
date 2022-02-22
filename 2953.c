#include <stdio.h>

int main()
{
    int i,j,a;
    int max=0;
    int sum=0;
    int per;
    for(i=1;i<=5;i++)
    {
        sum=0;
        for(j=1;j<=5;j++)
        {
            if(i==j)
            {
                
                continue;
            }
            scanf("%d",&a);
            sum+=a;
        }
        if(sum>max)
        {
            max=sum;
            per=i;
        }
    }
    printf("%d %d",per,max);
    return 0;
}