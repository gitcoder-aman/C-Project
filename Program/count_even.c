#include<stdio.h>
int even(int n);
main()
{
    int A[10],i,V,c=0;
    printf("enter element of array=");
    for(i=0;i<=9;i++)
    scanf("%d",&A[i]);
    for(i=0;i<=9;i++)
    {
    V=even(A[i]);
    if(V==1)
        c++;
    }
    printf("\nCount Even=%d",c);
}
int even(int n)
{
    int flag=0,i;
        for(i=1;i<=n;i++)
        if(n%2==0)
    {
        flag=1;
        break;
    }
    return(flag);
}
