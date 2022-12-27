#include<stdio.h>
void main()
{
    int mat[10][10],count=0,mag,n,i,j,temp,sum;
    printf("\n Enter no of rows:");// we are not taking no of column input bcz magic matrix only can be applied on square matrix
    scanf("%d",&n);
    mag=n*((n*n)+1)/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum+=mat[i][j];
        if(sum==mag)
            count++;
    }
    if(count==n)
    {
        count=0;
     for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum+=mat[j][i];
        if(sum==mag)
            count++;
    }
    if(count==n)
    {
        count=0;
        sum=0;
        for(i=0;i<n;i++)
    {
        sum+=mat[i][i];
        if(sum==mag)
            count++;
    }
    }
    }
    if(count==1)
        printf("\n It is a magic matrix");
    else
        printf("\n It is not a magic matrix");

}
