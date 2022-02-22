#include <stdio.h>

int main()
{
    char a[9][9];
    int i;
    for(i=0;i<8;i++)
    {
        scanf("%s",a[i]);
    }
    int n=0;
    int j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((i+j)%2==0&&a[i][j]=='F')
            {
                n++;
            }
        }
    }
    printf("%d\n",n);
    return 0;
}