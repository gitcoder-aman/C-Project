#include<stdio.h>
int main()
{
    int Days,Years=0,Weeks;
    printf("Enter Total Days:");
    scanf("%d",&Days);

     while (Days >= 365)
     {

         Years++;;
         Days-=365;
     }
     if(Days < 365)
     {
         Weeks=Days/7;
         Days=Days-(Weeks*7);
     }
     printf("%d Years",Years);
     printf(" %d Weeks",Weeks);
     printf("  %d Days",Days);
     return;
}
