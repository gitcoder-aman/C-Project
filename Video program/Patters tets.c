#include<stdio.h>
main()
{
	int stars=1;
	int height=5;
	int space=height;
	int i,k,j;
	
	for(i=1;i<=height;i++)
	{
		for(j=space;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<stars;k++)
		{
			printf("%d",i);
		}
		stars+=2;
		printf("\n");
	}
}
