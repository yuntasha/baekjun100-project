#include <stdio.h>

int main()
{
    int a,b;
    int per;
    int c[5];
    scanf("%d %d",&a,&b);
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i!=0)
            printf(" ");
        printf("%d",c[i]-a*b);
    }
    return 0;
}