#include <stdio.h>

int main()
{
    char a[6];
    int i;
    int tf=0;
    while(1)
    {
        tf=0;
        scanf("%s",a);
        if(a[0]=='0')
            break;
        for(i=0;a[i]!='\0';i++){

        }
        if(i==5)
        {
            if(a[0]==a[4]&&a[1]==a[3])
           {
               tf=1;
            }
        }
        else if(i==4)
        {
            if(a[0]==a[3]&&a[1]==a[2])
            {
                tf=1;
            }
        }
        else if(i==3)
        {
            if(a[0]==a[2])
            {
                tf=1;
            }
        }
        else if(i==2)
        {
            if(a[0]==a[1])
            {
                tf=1;
            }
        }
        else if(i==1)
            tf=1;
        if(tf==1)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}