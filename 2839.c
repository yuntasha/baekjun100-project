#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int th=0;
    int fi=0;
    while(n>=3)
    {
        if(n%5==0&&n>4)
        {
            break;
        }
        n-=3;
        th++;
    }
    if(n<3&&n!=0)
        printf("-1\n");
    else
    {
        fi=n/5;
        fi=fi+th;
        printf("%d\n",fi);
    }
    return 0;
}