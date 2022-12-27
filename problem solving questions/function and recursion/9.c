#include<stdio.h>
int lcm(int a,int b)
{
    return((a*b)/gcd(a,b));//Here we are using the formula {a*b=gcd(a,b)*lcm(a,b)}
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",lcm(a,b));
}
