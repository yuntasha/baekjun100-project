#include <stdio.h>

int main()
{
    int a[51];
    a[0]=0;
    a[1]=1;
    int i;
    int n;
    for(i=2;i<=50;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);
    printf("%d",a[n]);
    return 0;
}