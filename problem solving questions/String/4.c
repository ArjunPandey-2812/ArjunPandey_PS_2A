#include<stdio.h>
char A[50];
int now()
{
    int i=0,wc;
    while(A[i]!='\0')
    {
       if(i==0&&A[i]!=' ')
            wc=1;
        if(A[i-1]==' '&&A[i]!=' ')
            wc++;
        i++;
    }
    return wc;
}
void main()
{
    int wc;
    gets(A);
    wc=now(A);
    printf("%d",wc);
}
