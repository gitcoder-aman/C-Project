#include<stdio.h>
main()
{
    int n,i,j,k,l;
    printf("enter no of line=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=1;k<=n-i;k++)
            printf("%d",k);
            printf("\n");

    }

}
