//Without Return Without Parameter
#include<stdio.h>
void pyramid();
main()
{
    printf("Display Pyramid");
    pyramid();
}
void pyramid()
{
    int n,i,j,k,l;
    printf("\nenter no of line=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
}


