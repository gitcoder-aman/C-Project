#include<stdio.h>
struct emp
    {
        char name[40];
        char code[10];
        char city[20];
        long salary;
    };
    void avg(struct emp*);
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
        avg(&e[0]);
    }
    void avg(struct emp *ptr)
    {
        int i,c=0 ;long sum=0;float AVG;
        printf("\n********Average salary of those employee whose salary above 40000********");
        for(i=0;i<3;i++)
        {
            if((ptr+i)->salary>40000)
            {
                sum=sum+(ptr+i)->salary;
                c++;
            }
        }
        AVG=(float)sum/c;
        printf("\nAverage of salary above 40000=%f",AVG);
    }
