#include<stdio.h>
int perfect(int n,int N)
{
    {
        if(n==1)
            return 1;
        if(N%n==0)
        return (n+perfect(n-1,N));
        else
            return (perfect(n-1,N));
    }
}
void main()
{
    int i,n,N;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
       N=perfect(i-1,i);
       if(i==N)
        printf("%d ",i);
    }
}
