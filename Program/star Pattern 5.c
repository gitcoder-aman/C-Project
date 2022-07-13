#include<stdio.h>
#include<conio.h>
main()
{

           int i,j,k,l,p=5,n,m;
    printf("enter no of lines=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");

        for(k=1;k<=i;k++)
            printf("*");


       // for(l=1;l<i;l++)
         //   printf("*");
            printf("\n");
    }
    getch();
}
