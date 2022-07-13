#include<stdio.h>
#include<conio.h>
main()
{
    int N,i,j,k;
    printf("enter any no=");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
    printf("\n");
    }
    for(i=1;i<=N;i++)
    {
    for(k=1;k<=N-i;k++)
       printf("*");
        printf("\n");
    }
        getch();
    }

