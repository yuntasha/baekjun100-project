#include <stdio.h>

int main()
{
    int a[42]={0};
    int n,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        n=n%42;
        a[n]=1;
    }
    n=0;
    for(i=0;i<42;i++)
    {
        if(a[i]==1)
        {
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}