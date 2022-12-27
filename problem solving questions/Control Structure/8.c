#include <stdio.h>
void main()
{
    int x,y;
    printf("\n Enter x and y co-ordinates of the point:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("\n point is in 1st quadrant");
    else if(x<0&&y>0)
        printf("\n point is in 2nd quadrant");
    else if(x<0&&y<0)
        printf("\n point is in 3rd quadrant");
    else if(x>0&&y<0)
        printf("\n point is in 4th quadrant");
    else
        printf("\n point is at origin");
}
