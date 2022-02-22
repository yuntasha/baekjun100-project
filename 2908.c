#include <stdio.h>

void prin(char a[4])
{
    int i;
    for(i=2;i>-1;i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}

int main()
{
    char a[4];
    char b[4];
    scanf("%s",a);
    scanf("%s",b);
    if(a[2]>b[2])
    {
        prin(a);
    }
    else if(a[2]<b[2])
        prin(b);
    else{
        if(a[1]>b[1])
            prin(a);
        else if(a[1]<b[1])
            prin(b);
        else
        {
            if(a[0]>b[0])
                prin(a);
            else if(a[0]<b[0])
                prin(b);
        }
    }
    return 0;
}