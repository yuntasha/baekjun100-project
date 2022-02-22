#include <stdio.h>

int main()
{
    int class;
    int student;
    int score[1001];
    int i,j;
    int plus;
    float mid;
    float persent;
    scanf("%d",&class);
    for(i=0;i<class;i++)
    {
        mid=0;
        plus=0;
        scanf("%d",&student);
        for(j=0;j<student;j++)
        {
            scanf("%d",&score[j]);
            mid+=score[j];
        }
        mid=mid/student;
        for(j=0;j<student;j++)
        {
            if(mid<score[j])
            {
                plus++;
            }
        }
        persent=(float)plus/student*100;
        printf("%0.3f%%\n",persent);
    }
    return 0;
}