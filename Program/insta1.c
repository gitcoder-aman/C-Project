#include<stdio.h>
#include<conio.h>
main()
{
  int a=12;
  void*ptr=(int*)&a;
  printf("%d",*ptr);
  getchar();
  getch();
}
