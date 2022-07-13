#include<stdio.h>
struct emp
{
    char name[40];
    char code[10];
    char city[20];
    long salary;
};
void display(struct emp);
main()
{
    struct emp e1;
    printf("\nEnter First Employee::");
    printf("\nEnter Name=");
    gets(e1.name);
    printf("\nEnter code=");
    gets(e1.code);
    printf("\nEnter City=");
    gets(e1.city);
    printf("\nEnter Salary=");
    scanf("%ld",&e1.salary);
    display(e1);
}
void display(struct emp T)
{
    printf("\nInputted Employee info.");
    printf("\nName=%s  code=%s  city=%s  Salary=%ld",T.name,T.code,T.city,T.salary);
}
