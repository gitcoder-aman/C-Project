#include<stdio.h>
int high(int n1);
int low(int n2);
main()
{
    int n,ld,hd;
    printf("enter any Element=");
    scanf("%d",&n);
    hd=high(n);
    ld=low(n);
    printf("Highest digit=%d",hd);
    printf("\nLow digit=%d",ld);
}
int high(int n1)
{
    int r,H=0;
    while(n1>0)
    {
        r=n1%10;
        if(H<r)
            H=r;
        n1=n1/10;
    }
    return(H);
}
int low (int n2)
{
    int r,L=9;
    while(n2>0)
    {
        r=n2%10;
        if(L>r)
            L=r;
        n2=n2/10;
    }
    return(L);
}
