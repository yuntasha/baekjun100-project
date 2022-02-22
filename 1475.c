#include <stdio.h>

int main()
{
    char roomnum[8];
    int a[10]={0};
    int n,i;
    int maxnum=0;
    scanf("%s",roomnum);
    //-48
    for(i=0;roomnum[i]!='\0';i++)
    {
        n=(int)roomnum[i]-48;
        a[n]++;
    }
    a[6]+=a[9];
    if(a[6]%2==1)
        a[6]++;
    a[6]/=2;
    for(i=0;i<9;i++)
    {
        if(maxnum<a[i])
            maxnum=a[i];
    }
    printf("%d\n",maxnum);
    return 0;
}