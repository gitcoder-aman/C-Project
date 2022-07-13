#include<stdio.h>
void element(int ,int ,int,int *,int *);
main()
{
    int a,b,c,min,max;
    printf("Enter any 3 Element=");
    scanf("%d%d%d",&a,&b,&c);
    element(a,b,c,&max,&min);
    printf("Max Digit=%d and Min Digit=%d",max,min);
}
void element(int a,int b,int c,int *max,int *min)
{
    if(a<b&&a<c)
        *min=a;
    else if(b<a&&b<c)
        *min=b;
    else
        *min=c;

        if(a>b&&a>c)
            *max=a;
           else if(b>a&&b>c)
                *max=b;
            else
                *max=c;
}

