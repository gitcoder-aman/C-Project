#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,s;
    printf("Enter Two NUmbers:");
    scanf("%d%d",&a,&b);
   s= add(a,b);
    printf("SUM=%d",s);
}
int add(int x,int y)
{
    int s;
    s=x+y;
   return s;
}
