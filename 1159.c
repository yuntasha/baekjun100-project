#include <stdio.h>

int main()//97
{
    int n,i;
    int al[26]={0};
    char name[31];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",name);
        al[(int)name[0]-97]++;
    }
    n=0;
    for(i=0;i<26;i++)
    {
        if(al[i]>4)
        {
            printf("%c",i+97);
            n=1;
        }
    }
    if(n==0)
    {
        printf("PREDAJA");
    }
    printf("\n");
    return 0;
}