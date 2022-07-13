#include<stdio.h>
int arm(int n);
int main()
{             int n,V;
   printf("enter any element=");
   scanf("%d",&n);
   V=arm(n);
   if(V==n)
    printf("armstrong no:");
   else
    printf("not armstrong no:");
}
int arm(int n)
{      int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    return(s);
}
