#include<stdio.h>

int main()
{
	int T;
    scanf("%d",&T);
    int a=0; //300
    int b=0; //60
    int c=0; //10

    if(T%10!=0)
    {
        printf("-1\n");
    }
    else{
        while(T>=300)
        {
            T-=300;
            a++;
        }
        while(T>=60)
        {
            T-=60;
            b++;
        }
        while(T>=10)
        {
            T-=10;
            c++;
        }
        printf("%d %d %d\n",a,b,c);
    }
    
	return 0;
}