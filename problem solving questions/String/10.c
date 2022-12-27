#include<stdio.h>
#include<string.h>
char A[50];
char B[50];
void concat()
{
    int i,j;
    for(i=strlen(A),j=0;i<(strlen(A)+strlen(B));i++,j++)
    {
        A[i]=B[j];
    }
}
void main()
{
    int diff;
    gets(A);
    gets(B);
    concat();
    printf("%s",A);
}


