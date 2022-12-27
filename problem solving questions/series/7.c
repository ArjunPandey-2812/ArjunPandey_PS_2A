#include <stdio.h>
#include <math.h>
void main()
{
 int i,j,x,fact,n,k=1;
 printf("n=");
 scanf("%d",&n);
 printf("1");
 for(i=2;i<=n;i=i+2)
 {
     k++;
     fact=1;
     for(j=i+1;j>=1;j--)
        fact*=j;
        if((i/2)%2)
            printf("-%d/%d",k,fact);
        else
            printf("+%d/%d",k,fact);

 }
}

