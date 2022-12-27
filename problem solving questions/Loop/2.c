#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
            printf(" ");
        for(j=0;j<i;j++)
            printf("%d ",i+j);
        printf("\n");
    }
}
