#include <stdio.h>
#include <string.h>

int main()
{
    char a[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

    int i,j;
    char b[10];
    long long int sum=0;
    scanf("%s",b);
    for(i=0;i<10;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            sum=i*10;
        }
    }
    scanf("%s",b);
    for(i=0;i<10;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            sum+=i;
        }
    }
    scanf("%s",b);
    for(i=0;i<10;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            for(j=0;j<i;j++)
                sum*=10;
        }
    }
    printf("%lld\n",sum);
    return 0;
}