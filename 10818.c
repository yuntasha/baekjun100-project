#include <stdio.h>

int main()
{
    int i,k;
    int n,max,min;
    scanf("%d",&k);
    scanf("%d",&n);
    max=n;
    min=n;
    for(i=1;i<k;i++)
    {
        scanf("%d",&n);
        if(n<min)
            min=n;
        else if(n>max)
            max=n;
    }
    printf("%d %d",min,max);
    return 0;
}