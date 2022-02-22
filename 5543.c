#include <stdio.h>

int main()
{
    int h1,h2,h3,d1,d2;
    scanf("%d",&h1);
    scanf("%d",&h2);
    scanf("%d",&h3);
    scanf("%d",&d1);
    scanf("%d",&d2);
    int sum,hmin,dmin;
    dmin=d1;
    if(h1<h2)
        hmin=h1;
    else
        hmin=h2;
    if(hmin>h3)
        hmin=h3;
    if(d2<d1)
        dmin=d2;
    sum=hmin+dmin-50;
    printf("%d\n",sum);
    return 0;
}