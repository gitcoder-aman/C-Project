#include<stdio.h>
void lining();
int fact(int n);
main()
{
    int n,F;
    lining();
    printf("\nenter any element=");
    scanf("%d",&n);
    F=fact(n);
    printf("Factorial=%d\n",F);
    lining();
}
void lining()
{
    int i;
    for(i=1;i<=15;i++)
        printf("=");
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return(f);
}

