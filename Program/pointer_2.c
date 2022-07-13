#include<stdio.h>
void digit(int ,int *,int *);
main()
{
    int n,f,l;
    printf("enter any element=" );
    scanf("%d",&n);
    digit(n,&f,&l);
    printf("first digit=%d\n last digit=%d",f,l);
}
void digit(int n,int *f,int *l)
{
   int  temp=n;
    while(n>0)
    {
        *f=n%10;
        n=n/10;
    }
    n=temp;
    *l=n%10;

}
