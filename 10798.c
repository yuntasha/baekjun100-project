#include <stdio.h>

int main()
{
    char a[5][16];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s",a[i]);
    }
    int j;
    for(i=0;i<15;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j][i]=='\0')
            {
                a[j][i+1]='\0';
            }
            else
            {
                printf("%c",a[j][i]);
            }
        }
    }
    printf("\n");
    return 0;
}