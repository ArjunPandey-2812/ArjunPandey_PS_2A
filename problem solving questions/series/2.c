#include <stdio.h>
void main()
{
 int i,j,sum=0,fact,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fact=1;
     for(j=i;j>=1;j--)
        fact*=j;
     sum+=fact/i;
 }
 printf("\n%d",sum);
}
