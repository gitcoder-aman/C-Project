#include<stdio.h>
main()
{
	int y;
	printf("\nEnter Any Year:");
	scanf("%d",&y);
	if(y%400==0)
	{
		if(y%100==0)
		printf("\nGiven Year is Leap Year");
		else
		printf("\nGiven Year is not Leap Year");
	}
	else
	{
		if(y%4==0)
		printf("\nGiven Year is Leap Year");
		else
		printf("\nGiven Year is not Leap Year");
	}
}
