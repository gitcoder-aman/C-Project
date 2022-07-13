#include<stdio.h>
#include<stdlib.h>
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
    int op,flag=0,search,op1,flag1,flag2,op2;
    long L=sizeof(E);
    char co[10],modify_name[40],nm[40],cty[10],modify_code[10],modify_city[10],s_code[10];
    FILE *fpt,*nfpt;
    fpt=fopen("d:\\File_menu2.txt","rb+");
    if(fpt==NULL)
    {
        fpt=fopen("d:\\File_menu2.txt","wb+");
    }
    do
    {
        printf("\n::----------MENU-----------::");
        printf("\n 0)Exit\n 1)Add\n 2)Display\n 3)Search\n 4)Modify\n 5)Delete");
        printf("\nEnter Your Option::");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            fseek(fpt,0,2);
            printf("\nEnter Name, Code ,Salary and City:");
            scanf("%s %s %ld %s",E.name,E.code,&E.salary,E.city);
            fwrite(&E,sizeof(E),1,fpt);
            break;
        case 2:
           rewind(fpt);// fseek(fpt,0,0);
            printf("\nEmployee Information::\n");
            while(fread(&E,sizeof(E),1,fpt)==1)
            {
              printf("\nName=%s Code=%s Salary=%ld City=%s",E.name,E.code,E.salary,E.city);
            }
            break;
        case 0:
            printf("\nGood Bye! Have a nice Day::");
            fclose(fpt);
            exit(0);
        case 3:
           // rewind(fpt);
            printf("\n1>Name:\n2>Code:\n3>City:");
            printf("\nEnter Your Choice for searching::");
            scanf("%d",&op1);
              switch(op1)
             {
             case 1:
                rewind(fpt);
                printf("\nEnter Name you want to search::");
                scanf("%s",nm);
               flag2=0;
              while(fread(&E,sizeof(E),1,fpt)==1)
              {
              if(strcmpi(E.name,nm)==0)

              {
                  printf("\nRecords Found:");
                printf("\nName=%s Code=%s Salary=%ld City=%s",E.name,E.code,E.salary,E.city);
                flag2=1;
              }
              }
              if(flag2==0)
                printf("\nRecord Not Found:");
              break;
            case 2:
                rewind(fpt);
                printf("\nEnter Code you want to search::");
                scanf("%s",co);
                flag2=0;
               while(fread(&E,sizeof(E),1,fpt)==1)
            {
              if(strcmpi(E.code,co)==0)

              {
                  printf("\nRecords Found:");
                printf("\nName=%s Code=%s Salary=%ld City=%s",E.name,E.code,E.salary,E.city);
                flag2=1;
              }
            }
              if(flag2==0)
                printf("\nRecord Not Found:");
              break;
            case 3:
                rewind(fpt);
                printf("\nEnter City you want to search::");
                scanf("%s",cty);
                flag2=0;
               while(fread(&E,sizeof(E),1,fpt)==1)
             {
              if(strcmpi(E.city,cty)==0)
              {
                  printf("\nRecords Found:");
                printf("\nName=%s Code=%s Salary=%ld City=%s",E.name,E.code,E.salary,E.city);
                flag2=1;
              }
              }
              if(flag2==0)
                printf("\nRecord Not Found:");
             }

            break;
        case 4:
            rewind(fpt);
            printf("\nEmployee Information::\n");
            while(fread(&E,sizeof(E),1,fpt)==1)
            {
              printf("\nName=%s Code=%s Salary=%ld City=%s",E.name,E.code,E.salary,E.city);
            }
            printf("\n1>Name:\n2>Code:\n:");
            printf("\nEnter Your choice of modifing:");
            scanf("%d",&op2);
            switch(op2)
            {
            case 1:
                rewind(fpt);
            printf("\n\nEnter Name Which you want to modify::");
            scanf("%s",modify_name);
            fseek(fpt,0,0);
            flag1=0;
            while(fread(&E,sizeof(E),1,fpt)==1)
            {
                if(strcmpi(E.name,modify_name)==0)
                {

                    fseek(fpt,-L,1);//file pointer move that particular record
                    printf("\nEnter New Name:");
                    scanf("%s",E.name);
                    fwrite(&E,sizeof(E),1,fpt);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nRecord Not Found:");
            break;

            case 2:
                rewind(fpt);
                printf("\n\nEnter Code Which you want to modify::");
            scanf("%s",modify_code);
            fseek(fpt,0,0);
            flag1=0;
            while(fread(&E,sizeof(E),1,fpt)==1)
            {
                if(strcmpi(E.code,modify_code)==0)
                {

                    fseek(fpt,-L,1);//file pointer move that particular record
                    printf("\nEnter New Code:");
                    scanf("%s",E.code);
                    fwrite(&E,sizeof(E),1,fpt);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nRecord Not Found:");
            }
            break;
            case 5:

                nfpt=fopen("d:\\temp.txt","wb+");
                printf("\nEnter code for deleting::");
                scanf("%s",s_code);
                rewind(fpt);
                while(fread(&E,sizeof(E),1,fpt)==1)
                {
                    if(strcmpi(E.code,s_code)!=0)
                    {
                        fwrite(&E,sizeof(E),1,nfpt);
                    }
                }
                fclose(fpt);
                fclose(nfpt);
                remove("d:\\file_menu2.txt");
                rename("d:\\temp.txt","d:\\file_menu2.txt");
                fpt=fopen("d:\\file_menu2.txt","rb+");
                printf("\nDelete Record Successfully");
                break;

        default:
            printf("\nInvalid Option");
        }

    }while(1);
}

