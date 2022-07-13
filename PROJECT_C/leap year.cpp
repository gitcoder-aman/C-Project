#include<stdio.h>
#include<conio.h>
main()
{
	int n,y;
	printf("enter the any year=");
	scanf("%d",&y);
	if(y%400==0)
	{
		if(y%100==0)
		printf("given year is leap year");
		else
		printf("given year is not leao year");
		
	}
	else if(y%4==0)
	
	printf("given year is leap year");
		else
		printf("given year is  not leap  year");
	
	
}

