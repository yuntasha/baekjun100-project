#include <stdio.h>

int main()
{
    int a;
    int c[31]={0};
    int i;
    for(i=0;i<28;i++)
    {
        scanf("%d",&a);
        c[a]=1;
    }
    for(i=1;i<31;i++)
    {
        if(c[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}