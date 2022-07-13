//comman factor 1 ke alawa nhi hona chahiye  eg:
//a=8,b=15;                 2nd ex: a=12,b=15;
//1   1                             1    1
//2   3                             2    3
//4   5                             3    5
//8   15                            4    15
// 1 is only comman factor          6
#include<stdio.h>                 //12
#include<conio.h>                 //  then 3 is comman factor so this is not co-prime no
 main()
{
    int a,b,min,i;
    printf("enter two number=");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            break;
    }
    if(i==min+1)
        printf("%d and %d are co-prime no",a,b);
    else
        printf("%d and %d are not co-prime no",a,b);
    getch();
}
