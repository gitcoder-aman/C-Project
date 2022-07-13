#include<stdio.h>
main()
{
	int stars=1;
	int height=5;
	int space=height-1;
	int i,j,k;
	
	for(i=0;i<height;i++)
	{
		for(j=space;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<stars;k++)
		{
			printf("*");
		}
		stars+=2;
		printf("\n");
	}
}
