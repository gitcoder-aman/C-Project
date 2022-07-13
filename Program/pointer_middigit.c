#include<stdio.h>
void mid_digit(long ,int *,int *,int *);
main()
{
    long  n;  int md,cd,sqr=0;
printf("enter any element=");
scanf("%ld",&n);
mid_digit(n,&md,&cd,&sqr);
if(cd==-1)
    printf("\nMid Digit not possible:");
else
    printf("\nMid Digit=%d \nsum of square of each digit=%d",md,sqr);
}
void mid_digit(long num,int *md,int *cd,int *sqr)
{
    long T=num,S=num;
    int c=0,i,r,rem;
    while(num>0)
    {
        c++;
        num=num/10;
    }
    if(c%2==0)
        *cd=-1;
    num=T;
    c=(c+1)/2;
    for(i=1;i<=c;i++)
    {
        r=num%10;
       num=num/10;
    }
    *md=r;
    num=S;
    while(num>0)
    {
        rem=num%10;
        *sqr=*sqr+rem*rem;
        num=num/10;
    }

}

