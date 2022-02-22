#include <stdio.h>

int main()
{
    int n;
    int car;
    int cn=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&car);
        if(car==n)
        {
            cn++;
        }
    }
    printf("%d\n",cn);
    return 0;
}