#include <stdio.h>

int main()
{
    int a[5],i;
    int sum=0;
    int min=100;
    int j,k;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum=sum/5;
    for(j=0;j<3;j++)
    {
        min=100;
        for(i=0;i<5;i++)
        {
            if(min>a[i])
            {
                min=a[i];
                k=i;
            }
        }
        a[k]=100;
    }
    printf("%d\n",sum);
    printf("%d\n",min);
    return 0;
}