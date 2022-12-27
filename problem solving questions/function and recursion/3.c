#include<stdio.h>
int facto(int n,int r)
{
    if(n==0)
        return 1;
    if(n==1)
        return r;
    else
        return facto(n-1,n*r);
}
void main()
{
    unsigned int n,fact;
    scanf("%d",&n);
    fact=facto(n,1);
    printf("factorial is %d",fact);
}
