#include<stdio.h>
void lowest_digit(long,int *,int *);
long reverse(long);
main()
{
    long num;
    int low,pos;
    printf("Enter any element=");
    scanf("%ld",&num);
    lowest_digit(num,&low,&pos);
    printf("\nLowest Digit=%d and %dth the position",low,pos);
}
void lowest_digit(long n,int *L,int *P)
{
    long temp,rev;
    int r,c=0,low=9;
    temp=n;
    while(n>0)
    {
        r=n%10;
        if(low>r)
        low=r;
        n=n/10;
    }
    *L=low;
    rev=reverse(temp);
    while(rev>0)
    {
        r=rev%10;
        c++;
        if(low==r)
        {
            break;

        }
        rev=rev/10;
    }
    *P=c;
}
long reverse(long n)
{
    int r,rv=0;
    while(n>0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    return rv;
}

