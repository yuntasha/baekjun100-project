#include <stdio.h>

int main()
{
    int a[100];
    int i;
    int n;
    int k;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}