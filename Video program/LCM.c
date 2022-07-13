#include<stdio.h>
int main()
{//   LOWEST COMMAN MULTIPLY
    int a, b,i;
    printf("Enter Two Nos:");
    scanf("%d%d",&a,&b);// a=4 b=6         4     6
                                         //8     12
     for ( i =a ;i<=a*b ; i++)           //12    18
     {                                   //16    24
         if (i%a==0 &&i%b==0)            //20    30
         {
           break;  
         }                                
     }
    printf("LCM=%d",i);
}