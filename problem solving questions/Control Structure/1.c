#include<stdio.h>
void main()
{
    int bas_sal,hra,da,allowance,pf,tot_sal;
    char grade;
    printf("\n Enter basic salary and grade of employee:");
    scanf("%d",&bas_sal);
    scanf("%c",&grade);
    hra=0.2*bas_sal;
    da=0.5*bas_sal;
    pf=0.11*bas_sal;
    if(grade=='A')
       allowance=1700;
    else if(grade=='B')
       allowance=1500;
    else
       allowance=1300;
    tot_sal=bas_sal+hra+da+allowance-pf;
    printf("\n Total salary of employee is %d",tot_sal);
}
