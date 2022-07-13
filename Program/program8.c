#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,k,p=1,l;
    printf("enter no of line=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
            p=i;
        for(k=1;k<=i;k++)
            printf("%d",p++);
            p--;
        for(l=1;l<i;l++)

        printf("%d",--p);
        printf("\n");
    }
    getch();
}
