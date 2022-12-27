#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
int strong(int i)
{
    if(i>0)
    return (fact(i%10)+strong(i/10));
    else
        return 0;
}
void main()
{
    int i,N,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       N=strong(i);
       if(i==N)
        printf("%d ",i);
    }
}
