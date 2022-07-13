#include<stdio.h>
int main()
{
    int i,temp,n,sum=0,r;
    printf("Enter A Number:");
    scanf("%d",&n);
    
     temp=n;
     printf("%d",temp);
     printf("%d",n);
     while (n>0)
     {
         r=n%10;
         sum=sum*10+r;
         n/=10;
     }
     if(temp==sum)
     printf("Palidrome NO=%d",sum);
     else
     printf("Not Palidrome NO=%d",sum);
}