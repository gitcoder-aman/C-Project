#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
void main_menu()
{
  char ch;

	do
	{
		//window(1,1,80,50);
		//textbackground(BLACK);
		system("cls");
		//textcolor(4+BLINK);
		gotoxy(3,5);
		printf("S");
		//textcolor(WHITE);
		gotoxy(4,5);
		printf("upplier Info");
		//textcolor(4+BLINK);
		gotoxy(19,5);
		printf("C");
		//textcolor(15);
		gotoxy(20,5);
		printf("ustomer Info");
		//textcolor(4+BLINK);
		gotoxy(36,5);
		printf("M");
		//textcolor(15);
		gotoxy(37,5);
		printf("edicine");
		//textcolor(4+BLINK);
		gotoxy(48,5);
		printf("R");
		//textcolor(15);
		gotoxy(49,5);
		printf("Report");
		//textcolor(4+BLINK);
		gotoxy(57,5);
		printf("B");
		//textcolor(15);
		gotoxy(58,5);
		printf("ill");
		//textcolor(4+BLINK);
		gotoxy(64,5);
		printf("A");
		//textcolor(15);
		gotoxy(65,5);
		printf("bout");
		//textcolor(4+BLINK);
		gotoxy(72,5);
		printf("E");
		//textcolor(15);
		gotoxy(73,5);
		printf("xit");
		t();   //this function display date & time
		box1();
		main_box();
		gotoxy(30,10);
		//textcolor(GREEN);
		printf("Welcome To Medical Store ");
		gotoxy(2,28);
		//textcolor(15);
	}
}
