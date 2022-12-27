#include <stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=((2*i)-1);j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf("%d",((2*i)-1)-j+1);
        }
        printf("  ");
    }
}


