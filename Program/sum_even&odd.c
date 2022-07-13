#include<stdio.h>
void sum(long ,int *,int *);
main()
{
    long n;int O=0,E=0;
    printf("enter any element=");
    scanf("%ld",&n);
    sum(n,&O,&E);
    printf("sum of all Odd no =%d and Even no=%d",O,E);
}
void sum(long n,int *O,int *E)
{
    int r;
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
            *E=*E+r;
            else
                *O=*O+r;
            n=n/10;
    }
}
