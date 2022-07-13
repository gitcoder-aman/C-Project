#include<stdio.h>
void opposite(char ,char *);
main()
{
    char ch,opp;
    printf("enter any character=");
    scanf("%c",&ch);
        opposite(ch,&opp);
    printf("opposite case=%c",opp);
}
void opposite(char ch,char *opp)
{
    if(ch>=65&&ch<=90)
    *opp=ch+32;
    else
        if(ch>=97&&ch<=122)
        *opp=ch-32;
}
