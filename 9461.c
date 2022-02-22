#include <stdio.h>


int main()
{
    long int a[101];
    a[0]=1;
    a[1]=1;
    a[2]=1;
    a[3]=2;
    a[4]=2;
    a[5]=3;
    a[6]=4;
    a[7]=5;
    int i;
    for(i=8;i<101;i++)
    {
        a[i]=a[i-1]+a[i-5];
    }
    int n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        printf("%ld\n",a[num-1]);
    }
    
    return 0;
}