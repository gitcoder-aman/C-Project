#include<stdio.h>
void digit(int,int *,int *);
main()
{
    int n,g=0,l=9;
    printf("enter any element=");
    scanf("%d",&n);
    digit(n,&g,&l);
printf("greatest no=%d and lowest no=%d",g,l);
}
void digit(int n,int *ptr1,int *ptr2)
{        int r;
    while(n>0)
    {
        r=n%10;
        if(*ptr1<r)
            *ptr1=r;
        if(*ptr2>r)
            *ptr2=r;
        n=n/10;
    }

}
