#include<stdio.h>

int main()
{
	char a[103];
    int i;
    scanf("%s",a);
    printf("%c",a[0]);
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]=='-')
        {
            printf("%c",a[i+1]);
        }
    }
    printf("\n");
    
	return 0;
}