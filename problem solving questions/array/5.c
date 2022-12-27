#include<stdio.h>
void main()
{
    int a[10][10],row,col;
    printf("\n Enter no of rows and columns:");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    int t,d,l,r,g;
    g=0;
    t=0;
    l=0;
    d=row-1;
    r=col-1;

    while(t<=d && l<=r)
    {
        if(g==0)
        {
            for(int i=l;i<=r;i++)
            {
                printf("%d ",a[t][i]);
            }
            t++;
        }
        else if(g==1)
        {
            for(int i=t;i<=d;i++)
            {
                printf("%d ",a[i][r]);
            }
            r--;
        }
        else if(g==2)
        {
            for(int i=r;i>=l;i--)
            {
                printf("%d ",a[d][i]);
            }
            d--;
        }
        else if(g==3)
        {
            for(int i=d;i>=t;i--)
            {
                printf("%d ",a[i][l]);
            }
            l++;
        }

        g=(g+1)%4;
    }

}


