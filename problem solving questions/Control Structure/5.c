#include<stdio.h>
void main()
{
    int K,M,m,D,Y,C,F,wd;
    printf("\n Enter day:");
    scanf("%d",&K);
    printf("\n Enter month:");
    scanf("%d",&M);
    printf("\n Enter year(1990-2100):");
    scanf("%d",&Y);
    if(Y>=1990&&Y<=2100)
    {
        D=Y%100;
        C=Y/100;
        F=K+((13*M-1)/5)+D+(D/4)+(C/4)-2*C;
        wd=F%7;
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
    }


}
