#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("enter no of term=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //for(j=1;j<=i;j++)
        //printf(" ");
        for(k=5;k>=i;k--)
            printf("%d",i);
        printf("\n");
    }
    getch();
}
