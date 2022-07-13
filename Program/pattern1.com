#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  for(i=1;i<=j;i++)
  {
  for(j=1;j<=5;j++)
  if()
  printf("*");
  else
  printf(" ");
  }
  printf("\n");
  getch();
}
