#include<stdio.h>
main()
{
    FILE *fpt;
    char name [50],code [10];
    long salary;
    fpt=fopen("d:\\employee.txt","w+");
    for(int i=0;i<3;i++)
    {
        printf("\nEnter Name ,Code and Salary of any Employee::\n");
        scanf("%s %s %ld",name,code,&salary);
        fprintf(fpt,"%s %s %ld",name,code,salary);
   }
   rewind(fpt);
   printf("\nInfo.of all Employee::\n");
   while(fscanf(fpt,"%s %s %ld",name,code,&salary)!=EOF)
    printf("\nName=%s,Code=%s, Salary=%ld",name,code,salary);
   fclose(fpt);
}
