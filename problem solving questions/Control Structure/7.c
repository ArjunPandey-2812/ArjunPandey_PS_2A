#include<stdio.h>
void main()
{
    int temp;
    printf("\n Enter temperature of your town(in centigrade)");
    scanf("%d",&temp);
    if(temp<0)
        printf("\n Freezing weather!!!");
    else if(temp>=0&&temp<10)
        printf("\n Very cold weather!!!");
    else if(temp>=10&&temp<20)
        printf("\n Cold weather!!!");
    else if(temp>=20&&temp<30)
        printf("\n Normal in temperature");
    else if(temp>=30&&temp<40)
        printf("\n Hot weather!!!");
    else
        printf("\n Very hot weather!!!");

}
