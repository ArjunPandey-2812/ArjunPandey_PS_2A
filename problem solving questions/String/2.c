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
void reverse(int len)
{
    int i;
    char temp;
    for(i=0;i<(len/2);i++)
    {
        temp=A[i];
        A[i]=A[len-i];
        A[len-i]=temp;
    }
}
void main()
{
    int len;
    gets(A);
    len=strleng(A);
    reverse(len-1);
    printf("%s",A);
}
