#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d  ",j);
        }
        for(k=1;k<=(2*(6-i)-1);k++)
        {
            printf("   ");
        }
         for(l=i;l>=1;l--)
         {
             if(l==6)
                continue;
            printf("%d  ",l);
         }
        printf("\n\n");
    }
}

