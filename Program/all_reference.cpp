#include<stdio.h>
void change(int *,int *);
main()
{
    int x=10,y=35;
    printf("\noriginal value of x=%d,y=%d",x,y);
    change(&x,&y);
    printf("\nafter calling function x=%d,y=%d",x,y);
}
void change(int *ptr1,int *ptr2)
{
    *ptr1=*ptr1+20;
    *ptr2=*ptr2+20;
    printf("\nin function x=%d,y=%d",*ptr1,*ptr2);
}
