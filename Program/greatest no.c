#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("enter any three no=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("greatest no=%d",a);
    else
        printf("greatest no=%d",c);
    }
    else
        {
            if(b>c)
                printf("greatest no=%d",b);
            else
                printf("greatest no=%d",c);
        }
        getch();


}
