#include<stdio.h>
main()
{
    char s1[20]="java";
    char s2[20]="Java";//c is case sensetive

    int n;
    n=strcmpi(s1,s2);//strcmpi==case sensitive is not count else strcmp== is case sensetive is count::

    if(n==0)
        printf("\nBoth strings are same::");
    else
        printf("\nNot same::");

}
