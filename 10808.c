#include <stdio.h>

int main()
{
    char s[101];
    int al[26]={0};
    scanf("%s",s);
    int a,i,k;
    for(i=0;s[i]!='\0';i++)
    {
        k=(int)s[i]-97;
        al[k]++;
    }
    for(i=0;i<26;i++)
    {
        if(i!=0)
            printf(" ");
        printf("%d",al[i]);
    }
    printf("\n");

    return 0;
}