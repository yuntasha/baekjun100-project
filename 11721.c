#include <stdio.h>

int main()
{
    char s[110];
    scanf("%s",s);
    int i,j,k;
    k=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(s[i*10+j]=='\0')
            {
                k=1;
                break;
            }
            printf("%c",s[i*10+j]);
        }
        printf("\n");
        if(k==1)
            break;
    }
    return 0;
}