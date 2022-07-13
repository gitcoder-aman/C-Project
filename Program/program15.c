#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n,k,l;char ch='A';
     printf("enter no of line=");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n-i;j++)
            printf(" ");
ch='A';
         for(k=1;k<=i;k++)
        printf("%c",ch++);
   //ch='C';
         for(l=1;l<i;l++){
            printf("%c",ch-2);

         ch=ch-1;}

         printf("\n");
         }
}
