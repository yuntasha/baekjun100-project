#include <stdio.h>

int main()
{
    int a,b;
    int max=0;
    int re=0;
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%d %d",&a,&b);
        re+=b-a;
        if(max<re)
        {
            max=re;
        }
    }
    printf("%d\n",max);
    return 0;
}