#include<stdio.h>
int main()
{
    int x=50,*ptr;
    ptr=&x;
    printf("\nValue=%d,Adress store in pointer=%u",*ptr,ptr);
    ptr=ptr-1;//4 byte decrease
    printf("value=%d,address store in pointer=%u",*ptr,ptr);
return 0;          grabage value
}
