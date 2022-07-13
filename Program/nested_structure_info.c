#include<stdio.h>
main()
{
    struct
    {
        char name[40];
        char code[10];
        long salary;
        struct
        {
            int dd;
            int mm;
            int yy;
        }dob;
    }E;
    printf("\nEnter Name , Code , Salary of employee=");
    gets(E.name);
    gets(E.code);
    scanf("%ld",&E.salary);
    printf("\nEnter DOB (dd-mm-yy)");
    scanf("%d%d%d",&E.dob.dd,&E.dob.mm,&E.dob.yy);
    printf("\n--------Display info. of Employee--------");
    printf("\nName=%s  code=%s  Salary=%ld",E.name,E.code,E.salary);
    printf("\nDate Of Birth=%d-%d-%d",E.dob.dd,E.dob.mm,E.dob.yy);
}
