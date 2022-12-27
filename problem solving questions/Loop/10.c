#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i>((n/2)+1))
        {
         for(j=n;j>i;j--)
            printf(" ");
         for(k=0;k<(2*(i-(n/2))-1);k++)
         {
            printf("*");
         }
        }
        else
        {
            for(j=1;j<i;j++)
            printf(" ");
          for(k=0;k<=(2*(((n/2)+1)-i));k++)
          {
            printf("*");
          }
        }
          printf("\n");
    }
}
