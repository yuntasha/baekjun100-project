#include <stdio.h>

int main()
{
    char a[101];
    int sum=0;
    int n,i;
    
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        sum+=(int)a[i]-48;
    }
    printf("%d\n",sum);
    return 0;
}