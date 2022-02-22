#include <stdio.h>

int main()
{
    int a,b,min,sum;
    sum=0;
    min=-1;
    int i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<101;i++)
    {
        if(i*i>=a&&i*i<=b)
        {
            if(min==-1)
            {
                min=i*i;
            }
            sum+=i*i;
        }
    }
    if(min==-1)
    {
        printf("-1");
    }
    else{
        printf("%d\n%d\n",sum,min);
    }
    return 0;
}