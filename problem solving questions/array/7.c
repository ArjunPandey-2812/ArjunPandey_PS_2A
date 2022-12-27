#include<stdio.h>
void main()
{
    int a[]={2,4,3,4,3,2,4,1};
    int nonrep=a[0],i,count,j;
    for(i=0;i<8;i++)
    {
        count=0;
        for(j=0;j<8;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>1)
             break;
        }
        if(count==1)
        {
            nonrep=a[i];
        }
    }
    if(nonrep==a[0])
        printf("\n There is no non repeated element");
    else
    printf("%d",nonrep);
}
