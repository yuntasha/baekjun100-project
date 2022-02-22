#include <stdio.h>
#include <math.h>

int main()
{
    int i,n,x1,x2,y1,y2,r1,r2,dis;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        dis=pow(x1-x2,2)+pow(y1-y2,2);
        //printf("%d\n",dis);
        if(dis==0&&r1==0&&r2==0)
            printf("-1\n");
        else if(dis==pow(r1+r2,2))
            printf("1\n");
        else if(dis==pow(r1-r2,2))
        {
            if(dis==0)
                printf("-1\n");
            else
                printf("1\n");
        }
        else if(dis>pow(r1-r2,2)&&dis<pow(r1+r2,2))
            printf("2\n");    
        else if(dis<pow(r1-r2,2))
            printf("0\n");
        else if(dis>pow(r1+r2,2))
            printf("0\n");
    }
    return 0;
}