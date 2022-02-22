#include <stdio.h>
//k는 층 n은 호

int person(int k,int n)
{
    if(k==0)
    {
        return n;
    }
    int i;
    int per=0;
    for(i=1;i<=n;i++)
    {
        per+=person(k-1,i);
    }
    return per;
}
int main()
{
    int n,i,N,K;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&K);
        scanf("%d",&N);
        printf("%d\n",person(K,N));
    }
    return 0;
}