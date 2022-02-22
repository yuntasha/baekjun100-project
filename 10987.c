#include <stdio.h>

int main()//97
{
    char a[101];
    int i;
    int count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}