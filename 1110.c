#include <stdio.h>

int main()
{
    int num;
    int fnum;
    int snum;
    int a,b;
    int n=0;
    scanf("%d",&num);
    fnum=num;
    do
    {
        a=fnum/10;
        b=fnum%10;
        snum=a+b;
        fnum=b*10+snum%10;
        n++;
    }while(fnum!=num);
    
    printf("%d\n",n);
    return 0;
}