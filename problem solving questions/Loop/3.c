#include<stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",ch+i);
        printf("\n");
    }
}
