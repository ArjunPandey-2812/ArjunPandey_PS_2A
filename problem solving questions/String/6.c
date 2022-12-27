#include<stdio.h>
#include<string.h>
char A[50];
char B[50];
int compare()
{
    int i,j,conv=0;
    for(i=0,j=0;(i<strlen(A))&&(j<strlen(B));i++,j++)
    {
        if(A[i]!=B[j])
        {
         conv=A[i]-B[j];
         return conv;
        }
    }
    if((j<strlen(B))||(i<strlen(A)))
        conv=-1;
    return conv;
}
void main()
{
    int diff;
    gets(A);
    gets(B);
    diff=compare();
    if(diff==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");
}
