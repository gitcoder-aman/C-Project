#include<stdio.h>
void prime(int n);
main()
{   int  A[10],i;
    printf("enter element in array=");
    for(i=0;i<=9;i++)
    scanf("%d",&A[i]);

printf("\ndisplaying all prime no:");
for(i=0;i<10;i++)
prime(A[i]);
}
void prime(int n)
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
    if(flag==0)
        printf("\n%d is prime",n);
}
