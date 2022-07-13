#include<stdio.h>
main()
{
	int n=5,i,j,k;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i-1;k++)
		{
			printf("%c",k+65);
		}
		printf("\n");
	}
}
