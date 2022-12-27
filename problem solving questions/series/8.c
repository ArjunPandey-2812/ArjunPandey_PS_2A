#include <stdio.h>
void main()
{
 int i,j,sum=0,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    sum+=i*(i+1)*(i+2);
    printf("%d*%d*%d+",i,(i+1),(i+2));
 }
 printf("\n%d",sum);
}
