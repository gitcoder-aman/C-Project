#include<stdio.h>
#include<string.h>
struct emp
   {
       char name[40];
       char code[10];
       char city[20];
       long salary;
   };
   void search(struct emp*);
   main()
   {
       struct emp e[3];int i;
         for(i=0;i<3;i++)
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
        search(&e[0]);
   }
   void search(struct emp *ptr)
   {
       int i,flag=0;char se[10];
       printf("\nEnter search code of Employee=");
           fflush(stdin);
           gets(se);
       for(i=0;i<3;i++)
       {
           if(strcmpi((ptr+i)->code,se)==0)
           {
               printf("\nName=%s  Code=%s  City=%s  salary=%ld",(ptr+i)->name,(ptr+i)->code,(ptr+i)->city,(ptr+i)->salary);
               flag=1;
               break;
           }
       }
      if(flag==0)
        printf("\nRecord Not Found::");
   }
