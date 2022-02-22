#include <stdio.h>

int main()
{
    int a,i,b;
    int sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(100<a+sum)
        {
            b=sum;
            sum=a+sum;
            if(sum-100>100-b)
                sum=b;
            break;
        }
        sum+=a;
    }
    printf("%d\n",sum);

    return 0;
}