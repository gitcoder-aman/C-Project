#include<stdio.h>
int search(int n);
main()
{
    int n;
    printf("enter any element=");
    scanf("%d",&n);
    search(n);
}
int search(int n)
{
    int r,se;
    printf("enter searching digit=");
    scanf("%d",&se);
    while(n>0)
    {
        r=n%10;
        if(se==r)
            printf("search successful");
        n=n/10;
    }
}
