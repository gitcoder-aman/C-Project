#include<stdio.h>
#include<conio.h>
main()
{  int f1=0,f2=1,f3,n,i;
   printf("enter no of term=");
   scanf("%d",&n);
   printf("%d",f1);
   printf("%2d",f2);
   for(i=1;i<=n-2;i++)
   {
   f3=f1+f2;
   printf("%4d",f3);
   f1=f2;
   f2=f3;
   }
}
