#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter three sides of triangles in cm:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
    {
        if(b==c)
            printf("\n It is a equilateral triangle ");
        else
            printf("\n It is a isolateral triangle ");
    }
    else if(b==c)
    {
            printf("\n It is a isolateral triangle ");
    }
    else if(a==c)
    {
            printf("\n It is a isolateral triangle ");
    }
    else
    {
            printf("\n It is a scalene triangle ");
    }
}

