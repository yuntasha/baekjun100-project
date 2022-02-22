#include <stdio.h>

int main()
{
    int i;
    int sum=0;
    int score;
    for(i=0;i<5;i++)
    {
        scanf("%d",&score);
        if(score<40)
        {
            score=40;
        }
        sum+=score;
    }
    printf("%d\n",sum/5);
    return 0;
}