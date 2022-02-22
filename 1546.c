#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int max=0;
    float score[1001];
    float a=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&score[i]);
        if(max<score[i])
        {
            max=score[i];
        }
    }
    for(i=0;i<n;i++)
    {
        score[i]=score[i]/max*100;
        a+=score[i];
    }
    a=a/n;
    printf("%f",a);
    return 0;
}