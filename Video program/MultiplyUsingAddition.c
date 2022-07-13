#include<stdio.h>
int main()
{
    int num1,num2,Multiply=0;
    printf("Enter First Number:");
    scanf("%d",&num1);
        printf("Enter Second Number:");
    scanf("%d",&num2);

   for (int  i = 1; i<= num2; i++)
    {
        Multiply=Multiply+num1;
    }
        printf("Multiply=%d",Multiply);
    
}