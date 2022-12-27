#include<stdio.h>
void main()
{
    int A[30],B[30],C[30],D[30],i,j,k=1,z=1,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=m;i++)
        scanf("%d",&A[i]);
    for(i=1;i<=n;i++)
        scanf("%d",&B[i]);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(A[i]==B[j])
            {
                C[k]=A[i];
                k++;
                break;
            }
        }
    }
    i=j=1;
    while((i<=m)&&(j<=n))
    {
        if(A[i]<B[j])
        {
            D[z]=A[i];
            i++;
            z++;
        }
        else if(A[i]>B[j])
        {
            D[z]=B[j];
            j++;
            z++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while(i<=m)
    {
        D[z]=A[i];
        i++;
        z++;
    }
    while(j<=n)
    {
        D[z]=B[j];
        j++;
        z++;
    }
    printf("Common Elements are: ");
    for(i=1;i<k;i++)
        printf("%d ",C[i]);
    printf("\nUncommon Elements are: ");
    for(i=1;i<z;i++)
        printf("%d ",D[i]);
}
