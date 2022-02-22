#include <stdio.h>

int main()//97
{
    int n;
    int i,j,k,count;
    
    int zz;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&zz);

        count=0;
        int a[101]={0};
        for(j=1;j<=zz;j++)
        {
            k=j;
            while(k<101)
            {
                
                if(a[k]==1)
                    a[k]=0;
                else if(a[k]==0)
                    a[k]=1;
                k+=j;
            }
        }
        for(j=1;j<=zz;j++)
        {
            if(a[j]==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}