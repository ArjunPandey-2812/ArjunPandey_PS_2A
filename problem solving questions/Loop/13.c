#include<stdio.h>
void main()
{
    int A[100],N,i,j,count=0;
    scanf("%d",&N);
    A[i]=N;
    for(i=0;A[i]>0;i++)
    {
      A[i+1]=A[i]-5;
    }
    for(j=i;A[j]!=N;j++)
        A[j+1]=A[j]+5;
    for(i=0;i<=j;i++)
        printf("%d ",A[i]);
}
