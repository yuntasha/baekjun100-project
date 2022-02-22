#include <stdio.h>

int main()
{
    int i,n,s;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        sum+=s;
    }
    sum=sum+1-n;
    printf("%d",sum);
    return 0;
}