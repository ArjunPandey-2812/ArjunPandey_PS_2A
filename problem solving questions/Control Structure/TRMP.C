#include<stdio.h>
int main()
{
    int i,y,m,d,l,sum=0,wd;
    printf("\n Enter day:");
    scanf("%d",&d);
    printf("\n Enter month:");
    scanf("%d",&m);
    printf("\n Enter year(1973-2099):");
    scanf("%d",&y);
    sum=sum+((y-1973)*365);
    l=(y-1972)/4;
    sum+=l;
    for(i=1;i<m;i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10|i==12)
        {
            sum+=31;
        }
        else if(i==2)
        {
                sum+=28;
        }
        else
            sum+=30;
    }
    sum+=d;
    wd=sum%7;
    switch(wd)
        {
            case 1:printf("\n Monday");
                   break;
            case 2:printf("\n Tuesday");
                   break;
            case 3:printf("\n Wednesday");
                   break;
            case 4:printf("\n Thursday");
                   break;
            case 5:printf("\n Friday");
                   break;
            case 6:printf("\n Saturday");
                   break;
            case 0:printf("\n Sunday");
                   break;

        }

    return 0;
}
