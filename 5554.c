#include <stdio.h>

int main()
{
    int i;
    int t=0;
    int tt;
    for(i=0;i<4;i++)
    {
        scanf("%d",&tt);
        t+=tt;
    }
    tt=t/60;
    t=t%60;
    printf("%d\n%d\n",tt,t);
    return 0;
}