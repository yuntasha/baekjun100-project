#include <stdio.h>

int main()
{
    int a=1;
    int b=1;
    scanf("%d %d",&a,&b);
    while(a!=0||b!=0)
    {
        if(a>b)
            printf("Yes\n");
        else
            printf("No\n");
        scanf("%d %d",&a,&b);
    }
    return 0;
}