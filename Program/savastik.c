#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        printf("\n");
            printf("\t");
        for(j=1;j<=5;j++)
        {
            printf(" ");
            if(i==1&& j==2 ||i==2&&j==5||i==4&&j==1||i==5&&j==4)
                printf(" ");
            else
                printf("*");
        }
    }
}
