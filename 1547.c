#include <stdio.h>



int main()
{
    int a,b;
    int c[4]={0,1,0,0};
    int n,i,swap;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        swap=c[a];
        c[a]=c[b];
        c[b]=swap;
    }
    for(i=1;i<4;i++)
    {
        if(c[i]==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}