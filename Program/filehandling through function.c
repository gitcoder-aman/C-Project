//file processing through function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct emp
    {
        char name[40];
        char code[10];
        long salary;
        char city[10];
    };
void add_record(FILE *,struct emp );
void display(FILE *,struct emp);
main()
{

    struct emp E;
    int op,flag=0;
    //char co[10];
    FILE *fpt;
    fpt=fopen("d:\\File_fun.txt","rb+");
    if(fpt==NULL)
    {
        fpt=fopen("d:\\File_fun.txt","wb+");
    }
    do
    {
        printf("\n::----------MENU-----------::");
        printf("\n 0)Exit\n 1)Add\n 2)Display\n");
        printf("\nEnter Your Option::");
        scanf("%d",&op);
        switch(op)
        {
        case 0:
            printf("\nGood Bye!");
            fclose(fpt);
            return 1;
        case 1:
            add_record(fpt,E);
            break;
        case 2:
            display(fpt,E);
            break;
        default:
            printf("\nInvalid choice:");
        }
    }while(1);
}
void add_record(FILE *f,struct emp E)
{
    printf("\nEnter name,code,salary and city");
    scanf("%s %s %ld %s",E.name,E.code,&E.salary,E.city);
    fseek(f,0,2);
    fwrite(&E,sizeof(E),1,f);
}
void display(FILE *f,struct emp E)
{
    rewind(f);
    printf("\n----------Imployee info.----------");
    while(fread(&E,sizeof(E),1,f)==1)
    {
        printf("\nName=%s code=%s Salary=%ld city=%s",E.name,E.code,E.salary,E.city);

    }
}
