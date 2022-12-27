#include<stdio.h>
char A[50];
int strleng()
{
    int i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    return i;
}
void main()
{
    int len;
    gets(A);
    len=strleng(A);
    printf("%d",len);
}
