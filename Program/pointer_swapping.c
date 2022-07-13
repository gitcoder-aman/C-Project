#include<stdio.h>
void swap(int *,int *);
main()
{
    int a,b;
    printf("\nEnter Any two no=");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\na=%d ,b=%d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
