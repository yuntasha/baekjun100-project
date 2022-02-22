#include <stdio.h>

int main()
{
    int day=0;
    int A,B,V;
    int deg=0;
    scanf("%d %d %d",&A,&B,&V);
    deg=A;
    B=A-B;
    
    day=(V-A)/B+1;
    if((V-A)%B!=0)
    {
        day++;
    }
    printf("%d\n",day);


    return 0;
}