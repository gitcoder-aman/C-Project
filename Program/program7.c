#include<stdio.h>
#include<conio.h>
main()
{
    /*int i,j;
    for(i=1;i<=5;i++)
      {
          for(j=1;j<=9;j++)
          {
              if(j>=i&&j<=10-i)
                printf("*");
              else
                printf(" ");
          }
    printf("\n");
    }*/int n,i,j,k,l;
    printf("enter no of line=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=1;k<=n-i+1;k++)
            printf("*");
        for(l=1;l<=n-i;l++)
            printf("*");
        printf("\n");
    }
    getch();
}
