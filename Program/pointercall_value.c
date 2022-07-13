#include<stdio.h>
 main()
{
    int x=10,y=35;
    printf("\noriginal value of x=%d,y=%d",x,y);
    change(x,y);
    printf("\nafter calling function x=%d,Y=%d",x,y);

}
void change(int x,int y)
{
    x=x+20;
    y=y+20;
    printf("\nin function x=%d,y=%d",x,y);

}
