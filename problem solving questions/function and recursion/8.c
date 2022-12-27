#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);//Here we are using Euclid's Division Lemma
}
void main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",gcd(a,b));
}
