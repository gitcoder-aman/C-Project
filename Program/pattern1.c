#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
  for(j=i;j<=5;j++)
  {
  if(j>=i)
  printf("*");
  else
  printf(" ");
  }
  printf("\n");
  }
  getch();
}
