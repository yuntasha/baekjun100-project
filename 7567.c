#include <stdio.h>

int main()
{
    char a[51];
    scanf("%s",a);
    int l=10;
    int i;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==a[i-1])
        {
            l+=5;
        }
        else
            l+=10;
    }
    printf("%d\n",l);
    return 0;
}