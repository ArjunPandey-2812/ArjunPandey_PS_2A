#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
            printf(" ");
        for(k=i;k<=((2*i)-1);k++)
        {
            printf("%d",k);
        }
        for(l=1;l<i;l++)
        {
            printf("%d",((2*i)-1)-l);
        }
        printf("\n");
    }
}
