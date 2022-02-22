#include <stdio.h>

int main()
{
    char a[101];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)//65A 97a
    {
        if((int)a[i]>=97)
        {
            printf("%c",a[i]-32);
        }
        else
            printf("%c",a[i]+32);
    }
    printf("\n");
    return 0;
}