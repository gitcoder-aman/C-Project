#include<stdio.h>
main()
{
    FILE *fpt;
    char name[50],code[10],se[10];int search,flag=0;
    long salary;
    fpt=fopen("d:\\Employee_data.txt","w+");
    for(int i=0;i<2;i++)
    {
        printf("\nEnter Name code and salary of any employee::\n");
        scanf("%s %s %ld",name,code,&salary);
        fprintf(fpt,"%s %s %ld",name,code,salary);
    }
    rewind(fpt);
    printf("\nEnter code search");
    scanf(" %s",se);
    while(fscanf(fpt,"%s %s %ld",name,code,&salary)!=EOF)
         {
                search=strcmpi(code,se);
              //  printf("%d",search);
                 if(search==0)
              {
                printf("\nRecord Found::");
                printf("\nName=%s Code=%s salary=%ld",name,code,salary);
                flag=1;
              }
            }

               if(flag==0)
               printf("\nNo Record Found::");
    fclose(fpt);
}
