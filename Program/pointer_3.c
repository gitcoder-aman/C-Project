#include<stdio.h>
void digit(int ,int *,int *);
main()
{
    int n,e=0,o=0;
    printf("enter any element=");
    scanf("%d",&n);
    digit(n,&e,&o);
    printf("count even=%d\n count odd=%d",e,o);
}
void digit(int n,int *e,int *o)
{
    int r;
    while(n>0)
    {
        r=n%10;
        {
        if(r%2==0)
            *e=*e+1;
        else
            *o=*o+1;
        }
            n=n/10;
    }
}
