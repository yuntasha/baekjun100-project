#include <stdio.h>

int main()
{
    long long int a;
    int N,M;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&N,&M);
        a=1;
        for(j=0;j<N;j++)
        {
            a*=M-j;
            a/=j+1;
        }
        printf("%lld\n",a);
    }
    
    return 0;
}
// 9 8 7/3 2 1