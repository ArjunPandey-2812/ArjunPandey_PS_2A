#include<stdio.h>
int fibbo(int n,int next,int r)
{
    if(n==1)
        return r;
    else
        return fibbo(n-1,next+r,next);
}
void main()
{
    unsigned int n,fibb,i;
    scanf("%d",&n);
       fibb=fibbo(n,1,0);
       printf("%d ",fibb);
}

