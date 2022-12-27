#include <stdio.h>
#include<math.h>
int max(int i,int j)
{
    if(i>j)
        return i;
    else
        return j;
}
void main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=((2*n)-1);i++)
    {
        for(j=1;j<=((2*n)-1);j++)
        {
           printf("%d ",max(abs(n-i),abs(n-j))+1);
        }
        printf("\n");
    }
}

