#include <stdio.h>
#include <math.h>
void main()
{
 int i,j,x,fact,n,k;
 printf("n=");
 scanf("%d",&n);
 printf("x=");
 scanf("%d",&x);
 printf("1");
 for(i=1;i<=n;i++)
 {
     fact=1;
     for(j=i;j>=1;j--)
        fact*=j;
        k=pow(x,i);
        printf("+%d/%d",k,fact);
 }
}
