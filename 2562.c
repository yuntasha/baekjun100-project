#include <stdio.h>

int main()
{
    int i,n,max,maxn;
    scanf("%d",&n);
    max=n;
    maxn=1;
    for(i=2;i<=9;i++)
    {
        scanf("%d",&n);
        if(max<n)
        {
            max=n;
            maxn=i;
        }
    }
    printf("%d\n%d\n",max,maxn);
    return 0;
}