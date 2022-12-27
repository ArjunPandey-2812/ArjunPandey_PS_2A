#include<stdio.h>
#include<math.h>
int arm(int i,int n)
{
    if(i>0)
    return (pow(i%10,n)+arm(i/10,n));
    else
        return 0;
}
void main()
{
    int i,N,n=0,lb,up,t;
    scanf("%d",&lb);
    scanf("%d",&up);
    for(i=lb;i<=up;i++)
    {
        t=i;
        n=0;
        while(t!=0)
        {
            t=t/10;
            n++;
        }
       N=arm(i,n);
       if(N==i)
        printf("%d ",i);
    }
}
