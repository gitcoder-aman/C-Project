#include<stdio.h>
#include<conio.h>
 main()
 {  int i,j;
 for(i=1;i<=15;i++)
 {
 for(j=1;j<=9;j++)
 {
     if(j<=6-i||j>=4+i)
        printf("*");
     else
        printf(" ");
 }
 printf("\n");
 }
    getch();
}
