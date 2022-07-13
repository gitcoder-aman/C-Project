#include <stdio.h>
int prime(int n);
main()
{   int  A[10],i,V,s=0;
    printf("enter element in array=");
    for(i=0;i<=9;i++)
    scanf("%d",&A[i]);

for(i=0;i<10;i++)
{
V=prime(A[i]);
if(V==0)
    s=s+A[i];
}
    printf("\nTotal summ of prime no=%d",s);
}
int  prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return(flag);
}
