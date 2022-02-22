#include <stdio.h>
//층 호 몇번째

int main()
{
    int n,i;
    int H,W,N,RN,f,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&H,&W,&N);
        f=N%H;
        if(f==0)
        {
            f=H;
        }
        h=(N-1)/H+1;
        RN=f*100+h;
        printf("%d\n",RN);
    }
    
    return 0;
}