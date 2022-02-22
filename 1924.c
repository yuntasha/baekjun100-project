#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==2)
        y+=3;
    else if(x==3)
        y+=3;
    else if(x==4)
        y+=6;
    else if(x==5)
        y+=1;
    else if(x==6)
        y+=4;
    else if(x==7)
        y+=6;
    else if(x==8)
        y+=2;
    else if(x==9)
        y+=5;
    else if(x==11)
        y+=3;
    else if(x==12)
        y+=5;
    x=y%7;
    if(x==0)
        printf("SUN");
    else if(x==1)
        printf("MON");
    else if(x==2)
        printf("TUE");
    else if(x==3)
        printf("WED");
    else if(x==4)
        printf("THU");
    else if(x==5)
        printf("FRI");
    else if(x==6)
        printf("SAT");
    return 0;
}