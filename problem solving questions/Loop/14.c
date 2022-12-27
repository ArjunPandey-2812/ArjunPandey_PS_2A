#include<stdio.h>
void main()
{
    int z,i,j;
    scanf("%d",&z);
    printf("\n Input number is:\n");
    for(i=0;i<z;i++)
    {
        if(i==0||i==z-1)
        {
            for(j=0;j<z;j++)
                printf("*");
        }
        else
        {
            for(j=0;j<z;j++)
            {
                if(j==(z-i-1))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
