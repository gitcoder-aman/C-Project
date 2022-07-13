#include<stdio.h>
main()
{
    int x=50,*ptr;
    ptr=&x;
    printf("\nvalue of x=%d,address=%u",*ptr,ptr);
    printf("\nvalue =%d,address=%u",*ptr+x,&ptr);

}
