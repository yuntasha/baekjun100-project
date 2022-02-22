#include<stdio.h>

int main()
{
	int i,a;
    int min=-1;
    int sum=0;
    for(i=0;i<7;i++)
    {
        scanf("%d",&a);
        if(a%2==1)
        {
            if(min==-1)
            {
                min=0;
                min=a;
            }
            if(min>a)
                min=a;
            sum+=a;
        }
    }
    if(min==-1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n%d\n",sum,min);
    }
	return 0;
}