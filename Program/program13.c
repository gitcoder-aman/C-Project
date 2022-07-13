#include<stdio.h>
main()
{
    int n,i,j,k,l;
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
}
