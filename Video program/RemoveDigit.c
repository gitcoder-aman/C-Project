#include<stdio.h>
int RemoveDigit(int,int);
int main()
{
    int num,remove;
       printf("Enter A Number");
       scanf("%d",&num);
       printf("\nEnter a Remove Digit:");
       scanf("%d",&remove);
       RemoveDigit(num,remove);
}
int RemoveDigit(int num,int remove)
{
    int rem,s=0,sum=0,rem1;
    while(num!=0)
    {
        rem=num%10;
        if(rem!=remove)
        {
           s=s*10+rem;
        }
        num/=10;
    }
    while(s!=0)
    {
        rem1=s%10;
        sum=sum*10+rem1;
        s/=10;
    }
    printf("Sum=%d",sum);
   // return sum;
}