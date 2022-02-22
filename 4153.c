#include <stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    while(a!=0||b!=0||c!=0)
    {
        t=0;
        
        if(a*a+b*b==c*c)
            t=1;
        else if(a*a+c*c==b*b)
            t=1;
        else if(c*c+b*b==a*a)
            t=1;
        if(t==1)
            printf("right\n");
        else
            printf("wrong\n");
        scanf("%d %d %d",&a,&b,&c);
    }
    return 0;
}