#include<stdio.h>
int prime(int n,int N,int flag)
{
    if(n==1)  //base cond
        return flag;
    if(N%n==0)
    {
        flag++;
        return prime(n-1,N,flag);
    }
    else
        return (prime(n-1,N,flag));
}
void main()
{
    int i,N,lb,up;
    scanf("%d",&lb);
    scanf("%d",&up);
    for(i=lb;i<=up;i++)
    {
       N=prime(i-1,i,0);
       if(N==0)
        printf("%d ",i);
    }
}
