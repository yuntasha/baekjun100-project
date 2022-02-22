#include <stdio.h>

int main()
{
    int n,q;
    int cute=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&q);
        if(q==1)
            cute++;
        else
            cute--;
    }
    if(cute>0)
    {
        printf("Junhee is cute!\n");
    }
    else
        printf("Junhee is not cute!\n");
    return 0;
}