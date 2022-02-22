#include <stdio.h>

int main()
{
    long long int a[92];
    a[0]=0;
    a[1]=1;
    int i;
    int n;
    for(i=2;i<=91;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);
    printf("%lld",a[n]);
    return 0;
}