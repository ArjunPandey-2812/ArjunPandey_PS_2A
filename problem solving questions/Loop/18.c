#include <stdio.h>
#include<string.h>
void main()
{
    char A[300];
    int i,j,n;
    gets(A);
    n=strlen(A);
    for(i=0;i<n-1;i++)
    {
        A[i]='.';
        printf("%s\n",A);
    }
}


