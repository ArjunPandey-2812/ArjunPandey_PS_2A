#include<stdio.h>
void main()
{
    int a,b=0,temp,r;
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        r=temp%10;
        b=b*10+r;
        temp=temp/10;
    }
    if(a==b)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome ");
}
