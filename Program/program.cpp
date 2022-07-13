#include<stdio.h>
#include<conio.h>
main(void)
{
	int i,j,k;
	for(i=1;i<8;i++)
	{
		if(i==3||i==5)
		continue;
			for(j=1;j<=1;j++)
			{
				for(k=j;k>0;k--)
				printf("%d",k);
				printf("\n");
			}
			printf("\n");
		}
	return (0);
}
