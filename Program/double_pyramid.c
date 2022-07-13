#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,n,m;
    printf("enetr no of line=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
            for(k=1;k<=n-i;k++)
                printf(" ");
                for(l=1;l<n-i;l++)
                    printf(" ");
            for(m=1;m<=i;m++)
            {

                printf("*");
            if(m==4)
                    printf("\b");
            }
            printf("\n");


    }
    getch();
}
