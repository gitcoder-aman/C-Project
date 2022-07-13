//Write a Program to Find GCD or HCF of two numbers entered by user
#include<stdio.h>
int main()
{
    int i,num1,num2,HCF;
    printf("\nEnter First No.");
    scanf("%d",&num1);
    printf("\nEnter Second No.");                     //HCF
                                                      //12=1,2,3,4,6,12
    scanf("%d",&num2);                                //6=1,2,3,6

    for ( i = 1; i < (num1<num2?num1:num2); i++)
    {
        if (num1%i==0 && num2%i==0)
        {
             HCF=i;
        }
        
    }
    printf("HCF=%d",HCF);
    
}