#include<stdio.h>
#include<string.h>
main()
{
    struct emp
    {
        char name[40];
        char code[10];
        char city[20];
        long salary;
    };
    int i;
    struct emp a[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter Name=");
        scanf("%s",a[i].name);
        printf("\nEnter code=");
        scanf("%s",a[i].code);
        printf("\nEnter city=");
        scanf("%s",a[i].city);
        printf("\nEnter Salary=");
        scanf("%ld",a[i].salary);
    }
    printf("\nEmployee who live in Gaya is::");
    for(i=0;i<5;i++)
    {
        if(strcmpi(a[i].city,"GAYA")==0)
        {
            printf("\nName=%s  code=%s  salary=%ld  city=%s",a[i].name,a[i].code,a[i].salary,a[i].city);
        }
    }
}

