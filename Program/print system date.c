#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
  SYSTEMTIME stime;
  GetSystemTime(&stime);
  printf("%d /%d /%d",stime,wDay,stime,Wmonth,stime,Wyear);
 // getch();
  //return(0);
}
