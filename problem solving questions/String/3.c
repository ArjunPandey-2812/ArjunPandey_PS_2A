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
int palin(int len)
{
    int i,count=0;
    char temp;
    for(i=0;i<(len/2);i++)
    {
        if(A[i]==A[len-i])
            count++;
    }
    return count;
}
void main()
{
    int len,ispal;
    gets(A);
    len=strleng(A);
    ispal=palin(len-1);
    if(ispal==len/2)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");


}

