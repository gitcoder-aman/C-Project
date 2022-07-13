// HIGHEST COMMAN FACTOR
#include<stdio.h>
int main()
{
    int a, b,i,loop,Find=1;
    printf("Enter Two Nos:");        // 4=1,2,4
    scanf("%d%d",&a,&b);// a=4 b=6   // 6=1,2,3,6

     loop=a<b?a:b;
     
   for ( i = 2; i <= loop ; i++)
    {
        if (a%i==0 && b%i==0)
        {
            Find=i;
        } 
    }
    printf("HCF=%d",Find);
}