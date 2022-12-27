#include<stdio.h>
#include<string.h>
#include<ctype.h>
char A[50];
void charchange()
{
    int i;
    for(i=0;i<strlen(A);i++)
    {
        if(islower(A[i]))
        {
            A[i]=toupper(A[i]);
        }
        else if(isupper(A[i]))
        {
            A[i]=tolower(A[i]);
        }
    }
}
void main()
{
    gets(A);
    charchange();
    printf("%s",A);
}
