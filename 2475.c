#include <stdio.h>

int main()
{
    int a;
    int i;
    int num=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        num+=a*a;
    }
    num=num%10;
    printf("%d\n",num);
    return 0;
}