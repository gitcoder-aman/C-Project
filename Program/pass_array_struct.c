#include<stdio.h>
#include<string.h>
struct emp
     {
         char name[40];
         char code[10];
         char city[20];
         long salary;
     };
     void display(struct emp*);
     main()
     {
         struct emp e[4];int i;
         for(i=0;i<4;i++)
        {
         printf("\nEnter Employee's Name=");
         fflush(stdin);
         gets(e[i].name);
         printf("\nEnter Code of Employee=");
         gets(e[i].code);
         printf("\nEnter City of Employee=");
         gets(e[i].city);
         printf("\nEnter Salary of Employee=");
         scanf("%ld",&e[i].salary);
        }
        display(&e[0]);
     }
    void display(struct emp *ptr)
    {
        int i,n;
        printf("\nDisplaying those employee who are living in gaya::");
        for(i=0;i<4;i++)
        {
            n=strcmpi((ptr+i)->city,"Gaya");
            if(n==0)
                printf("\nName=%s  code=%s  city=%s  salary=%ld",(ptr+i)->name,(ptr+i)->code,(ptr+i)->city,(ptr+i)->salary);

        }
    }
