#include<stdio.h>
struct emp
{
    char name[40];
    char code[10];
    long salary;
};
void display(struct emp);
main()
{
    struct emp e1,e2;
    printf("\nEnter First Employee::");
    printf("\nEnter Name=");
    gets(e1.name);
    printf("\nEnter code=");
    gets(e1.code);
    printf("\nEnter Salary=");
    scanf("%ld",&e1.salary);
    printf("\n\nEnter Second Employee::");
    fflush(stdin);
    printf("\nEnter Name=");
    gets(e2.name);
    printf("\nEnter code=");
    gets(e2.code);
    printf("\nEnter Salary=");
    scanf("%ld",&e2.salary);
    if(e1.salary>e2.salary)
        display(e1);
    else
        display(e2);
}
void display(struct emp T)
{
    printf("\nInfo. of Employee Who Get Max Salary::");
    printf("\nName=%s  code=%s  salary=%ld",T.name,T.code,T.salary);
}
