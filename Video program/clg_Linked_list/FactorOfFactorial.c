#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,Factor=1;
    printf("Enter A Exact Factorial by user=");
    scanf("%d",&num);
     int i; 
    
    for ( i = 1; i < num ; i++)
    {
        if(Factor < num)
        Factor=Factor*i;
        
        if (Factor < num)
        {
            printf("%d",i);
            printf("X");
        }
        
        else if (Factor==num)
        {
            printf("%d",i);
            break;
        }
        else
        {
            system("cls");
            printf("This Number is not Exact Factorial....");
            break;
        }
    }
    
}