#include <stdio.h>

int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    a=fabs(a-b);
    printf("%lld\n",a);
    return 0;
}