#include<stdio.h>
void above(long,int *,int *);
main()
{
    long n;int S,C;
    printf("enter any Element=");
    scanf("%ld",&n);
    above(n,&S,&C);
    printf("sum of those digit=%d\n count digit=%d",S,C);
}
void above(long n,int *S,int *C)
{
    int r,Sum=0,Count=0;
    while(n>0)
    {
        r=n%10;
        if(5<r)
        {
            Sum=Sum+r;
            Count++;
        }
            n=n/10;
    }
    *S=Sum;
    *C=Count;

}
