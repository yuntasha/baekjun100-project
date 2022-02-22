#include <stdio.h>

int main()
{
    char a[18];
    scanf("%s",a);
    int i=0;
    int ti=0;
    while (a[i]!='\0')
    {
        
        if('A'<=a[i] && a[i]<='C')
            ti+=3;
        else if('D'<=a[i] && a[i]<='F')
            ti+=4;
        else if('G'<=a[i] && a[i]<='I')
            ti+=5;
        else if('J'<=a[i] && a[i]<='L')
            ti+=6;
        else if('M'<=a[i] && a[i]<='O')
            ti+=7;
        else if('P'<=a[i] && a[i]<='S')
            ti+=8;
        else if('T'<=a[i] && a[i]<='V')
            ti+=9;
        else if('W'<=a[i] && a[i]<='Z')
            ti+=10;
        
        i++;
    }
    printf("%d\n",ti);
    return 0;
}