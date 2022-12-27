#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter an alphabet:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
            printf("\n %c is a vowel",ch);
        else
            printf("\n %c is a consonant",ch);
    }
}
