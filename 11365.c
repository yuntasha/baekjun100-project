#include <stdio.h>
#include <string.h>

int main()
{
    char a[501];
    int i;
    gets(a);
    while(strcmp(a,"END")!=0)
    {
        for(i=strlen(a)-1;i>=0;i--)
        {
            printf("%c",a[i]);
        }
        printf("\n");
        gets(a);

    }
    return 0;
}