#include<stdio.h>
void meanmed(int A[30],int n)
{
    int i,j,k,temp;
    float mean,median;
    for(i=1;i<=n;i++)
        mean+=A[i];
    mean/=n;
    for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          if(A[j]>A[i])
          {
              temp=A[i];
              A[i]=A[j];
              A[j]=temp;
          }
      }
  }
  if(n%2)
    median=A[n/2];
  else
  {
      k=n/2;
    median=(A[k]+A[k+1])/2.0;
  }
    printf("\nMean is %.2f and median is %.2f",mean,median);
}
void main()
{
    int A[30],n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);
    meanmed(A,n);
}
