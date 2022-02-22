#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b+c==180)
    {
        if(a==b&&b==c)
        {
            printf("Equilateral\n");
        }
        else if(a==b||b==c||c==a)
        {
            printf("Isosceles\n");
        }
        else
            printf("Scalene\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}