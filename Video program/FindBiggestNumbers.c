#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter Three Nos:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2)
    {
        (num2>num3)?printf("Number 2 Biggest"):printf("Number 3 Biggest");  
        
    }
    else
    {
        (num1>num3)?printf("Number 1 Biggest"):printf("Number 3 Biggest");
    }
}