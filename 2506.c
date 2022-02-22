#include <stdio.h>

int main()
{
    int n,i,n2,score;
    int sum=0;
    score=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&n2);
        if(n2==1)
        {
            score++;
            sum+=score;
        }
        else
            score=0;
    }
    printf("%d\n",sum);
    return 0;
}