
#include<stdio.h>
#include<string.h>
main()
{
    struct emp
    {
        char name[40];
        char code[10];
        long salary;
        char city[10];
    };
    struct emp E;
    char ch;
    FILE *fpt;
    fpt=fopen("d:\\Emp3.txt","ab+");
    do
    {
        printf("\nEnter Name, code ,salary And city of any Employee::");
        scanf("%s %s %ld %s",E.name,E.code,&E.salary,E.city);

        fwrite(&E,sizeof(E),1,fpt);
        printf("\nWant to add more record y/n?> ");
        scanf(" %c",&ch);
    }while(ch=='y');
    rewind(fpt);
    printf("\n---------------Displaying ALl info Who are living in Gaya::----------\n\n");
    while(fread(&E,sizeof(E),1,fpt)==1)
    {
        if(strcmpi(E.city,"Gaya")==0)
            printf("\nName=%s Code=%s  Salary=%ld City=%s",E.name,E.code,E.salary,E.city);

    }
    fclose(fpt);
}
