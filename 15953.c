#include <stdio.h>

int main()//97
{
    int i,a,b,n,money;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==1)
            money=500;
        else if(a==0)
            money=0;
        else if(a<=3)
            money=300;
        else if(a<=6)
            money=200;
        else if(a<=10)
            money=50;
        else if(a<=15)
            money=30;
        else if(a<=21)
            money=10;
        else
            money=0;
        
        if(b==1)
            money+=512;
        else if(b==0)
            b=1;
        else if(b<=3)
            money+=256;
        else if(b<=7)
            money+=128;
        else if(b<=15)
            money+=64;
        else if(b<=31)
            money+=32;
        
        printf("%d\n",money*10000);
    }
    return 0;
}