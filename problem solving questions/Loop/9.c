#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
        {
         for(j=3;j>i;j--)
            printf(" ");
         for(k=1;k<=((2*i)-1);k++)
         {
            printf("*");
         }
        }
        else
        {
            for(j=3;j<i;j++)
            printf(" ");
          for(k=(2*(5-i)+1);k>0;k--)
          {
            printf("*");
          }
        }
          printf("\n");
    }
}
