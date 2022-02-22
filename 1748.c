#include <stdio.h>

int main()
{
    int i,n,a,b;//9ㄲ자ㅣ
    int sum=0;
    scanf("%d",&n);
    sum=n;
    if(n>=10)
        sum+=n-9;
    if(n>=100)
        sum+=n-99;
    if(n>=1000)
        sum+=n-999;
    if(n>=10000)
        sum+=n-9999;
    if(n>=100000)
        sum+=n-99999;
    if(n>=1000000)
        sum+=n-999999;
    if(n>=10000000)
        sum+=n-9999999;
    if(n>=100000000)
        sum+=n-99999999;
    if(n>=1000000000)
        sum+=n-999999999;
    printf("%d\n",sum);
    return 0;
}