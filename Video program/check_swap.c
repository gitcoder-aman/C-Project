#include<stdio.h>
int value(int);
int main()
{

    int a,b;
    printf("Enter Value of a:");
   scanf("%d",&a); //10

    printf("\nEnter Value of b:");
    scanf("%d",&b); //20
    value(b);

     b=a;
    printf("\nAfter Swap Value b=%d",b);
}
int value(int b)
{
    int a;

     a=b;
    printf("After Swap Value a=%d",a);
}
