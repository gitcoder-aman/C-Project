#include<graphics.h>
int main()
{
	int gd=0, gm;
	initgraph(&gd, &gm,"");
	circle(100,80,20);
	getch();
	closegraph();
	return 0;
}
