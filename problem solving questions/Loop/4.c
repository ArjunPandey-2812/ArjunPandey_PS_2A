#include<stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",ch+i+j);
        printf("\n");
    }
}
