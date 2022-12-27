#include<stdio.h>
void main()
{
    int mat[10][10],rot[10][10],row,col,i,j,temp;
    printf("\n Enter no of rows and columns:");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            rot[i][j]=mat[row-i-1][col-1-j];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",rot[i][j]);
        printf("\n");
    }

}

