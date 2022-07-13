#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct student_info
{
    int id;
    char std_name[30];
    char class[20];
    char city[20];
    char DOB[20];
};
void insert_info(FILE *, struct student_info);

void display(FILE *, struct student_info);

void search_id(FILE *, struct student_info);
void search_name(FILE *, struct student_info);
void search_class(FILE *, struct student_info);

void modify_name(FILE *, struct student_info);
void modify_class(FILE *,struct student_info);
void modify_city(FILE *,struct student_info);
void modify_DOB(FILE *,struct student_info);
void delete_record(FILE *,FILE *,struct student_info);
void sort(FILE *,struct student_info);
void lock();
main()
{
    int id=1111,pass=1234;
    printf("\n\t\t\t\tSCHOOL MANAGEMENT SYSTEM:\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME TO MIRZA GALIB COLLEGE (GAYA):\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \n");
    printf("\nCreated By Aman Kumar\n\n");

while(id!=1)
    {
    printf("\n\t\t\t\t\t\tEnter user id:\t");
    scanf("%d",&id);
    system("cls");

    switch(id)
    {
    case 1111:
         while(pass!=1)
        {
        printf("\n\t\t\t\t\t\tEnter Password:\t");
        scanf("%d",&pass);

        switch(pass)
        {
        case 1234:
            printf("\nWelcome To Main Page:");
           lock();
        default:
             system("cls");
            printf("\nIncorrect Password:");
            break;
        }//end of password switch;
        }//end of password loop;
       break;
        default:
            system("cls");
            printf("\nIncorrect User Id:");
            break;
    }//end of id switch;
    }//end of loop;
}
    void lock()
{
    struct student_info S;
    int op,op1,op2;
    FILE *fpt,*nfpt;
    fpt=fopen("d:\\PROJECT.TXT","rb+");
    if(fpt==NULL)
    {
        fpt=fopen("d:\\PROJECT.TXT","wb+");
    }

    do
    {
        loop:
            loop1:
        printf("\n:---------MENU----------:\n");
        printf("\n0)EXIT:\n1)INSERT_INFO:\n2)DISPLAY:\n3)SEARCH RECORD:\n4)MODIFY RECORD:\n5)DELETE RECORD:\n6)SORT RECORD:");
        printf("\nEnter Your Choice:?");
        scanf("%d",&op);
    switch(op)
     {
      case 0:
       printf("\nGood Bye!");
       fclose(fpt);
       exit(0);
      case 1:
        insert_info(fpt,S);
        break;
      case 2:
        display(fpt,S);
        break;
      case 3:
          system("cls");
        printf("\n0>PREVIOUS MENU\n1>std_name\n2>class\n3>std_id");
        printf("\nWhat do you Want To search:");
        scanf("%d",&op1);
        switch(op1)
        {
          case 1:
        search_name(fpt,S);
        break;

          case 2:
        search_class(fpt,S);
        break;

          case 3:
        search_id(fpt,S);
        break;
          case 0:
              system("cls");
        goto loop;
        }
        break;
    case 4:
        system("cls");
        printf("\n0>PREVIOUS MENU\n1>NAME MODIFY\n2>CLASS MODIFY\n3>CITY MODIFY\n4>DOB MODIFY\n");
        printf("\nWhat do you want to modify:?");
        scanf("%d",&op2);
       switch(op2)
       {
       case 1:
        modify_name(fpt,S);
        break;
       case 2:
        modify_class(fpt,S);
        break;
       case 3:
        modify_city(fpt,S);
        break;
       case 4:
        modify_DOB(fpt,S);
        break;
       case 0:
        system("cls");
        goto loop1;
       }
       break;
      case 5:
        delete_record(fpt,nfpt,S);
        break;
      case 6:
        sort(fpt,S);
        break;
      default:
        printf("\nInvalid Choice:");
     }

    }while(1);
}
void insert_info(FILE *f,struct student_info S)
{
    fseek(f,0,2);
    printf("\nEnter std_name,std_id,Class,city and DOB :");
    scanf("%s %d %s %s %s",S.std_name,&S.id,S.class,S.city,S.DOB);
    fwrite(&S,sizeof(S),1,f);
}
void display(FILE *f,struct student_info S)
{
    system("cls");
    rewind(f);
    printf("\n------------STUDENT_INFO.------------\n");
    while(fread(&S,sizeof(S),1,f)==1)
    {

        printf("\nstd_name=%s,std_id=%d,class=%s,city=%s,DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
    }
}
void search_name(FILE *f,struct student_info S)
{
    rewind(f);
    char name[40];
    printf("\nEnter name you want to search:");
    scanf("%s",name);
int flag=0;
              printf("\nRecords Found:");
              while(fread(&S,sizeof(S),1,f)==1)
              {
              if(strcmpi(S.std_name,name)==0)

              {
                  printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);

                flag=1;
              }
              }
              if(flag==0)
                printf("\nRecord Not Found:");
}
void search_class(FILE *f,struct student_info S)
{
    rewind(f);
    char clss[20];
    printf("\nEnter class you want to search:");
    scanf("%s",clss);
int flag=0;
               printf("\nRecords Found:");
              while(fread(&S,sizeof(S),1,f)==1)
              {
              if(strcmpi(S.class,clss)==0)

              {
                  printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);

                flag=1;
              }
              }
              if(flag==0)
                printf("\nRecord Not Found:");
}
void search_id(FILE *f,struct student_info S)
{
    rewind(f);
    int std_id;
    printf("\nEnter id you want to search:");
    scanf("%d",&std_id);
    int flag=0;
               printf("\nRecords Found:");
              while(fread(&S,sizeof(S),1,f)==1)

              {
              if(S.id==std_id)

              {
                  printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
                flag=1;
              }
              }
              if(flag==0)
                printf("\nRecord Not Found:");
}
void modify_name(FILE *f,struct student_info S)
{
    char modify_name[40];
    int flag1=0,flag=0,std_id;
    long L=sizeof(S);
            rewind(f);
                printf("\nStudent Information::\n");
            while(fread(&S,sizeof(S),1,f)==1)
            {
                printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
            }
            rewind(f);
            printf("\n\nEnter Student_id:");
            scanf("%d",&std_id);
            flag=0;
             while(fread(&S,sizeof(S),1,f)==1)
              {
              if(S.id==std_id)
              {
                   flag=1;

                      rewind(f);
            printf("\n\nEnter the name of id for modify::");
            scanf("%s",modify_name);
            fseek(f,0,0);
            flag1=0;
            while(fread(&S,sizeof(S),1,f)==1)
            {
                if(strcmpi(S.std_name,modify_name)==0)
                {

                    fseek(f,-L,1);//file pointer move that particular record
                    printf("\nEnter New Name:");
                    scanf("%s",S.std_name);
                    fwrite(&S,sizeof(S),1,f);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nNot found enter name:");
            break;
              }
              }
              if(flag==0)
                printf("\nNot found enter id:");
}
void modify_class(FILE *f,struct student_info S)
{
 char modify_class[20];
    int flag1=0,flag=0,std_id;
    long L=sizeof(S);
            rewind(f);
                printf("\nStudent Information::\n");
            while(fread(&S,sizeof(S),1,f)==1)
            {
                printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
            }
            rewind(f);
            printf("\n\nEnter Student_id:");
            scanf("%d",&std_id);
            flag=0;
             while(fread(&S,sizeof(S),1,f)==1)
              {
              if(S.id==std_id)
              {
                   flag=1;

                      rewind(f);
            printf("\n\nEnter the class of id for modify::");
            scanf("%s",modify_class);
            fseek(f,0,0);
            flag1=0;
            while(fread(&S,sizeof(S),1,f)==1)
            {
                if(strcmpi(S.class,modify_class)==0)
                {

                    fseek(f,-L,1);//file pointer move that particular record
                    printf("\nEnter New Class:");
                    scanf("%s",S.class);
                    fwrite(&S,sizeof(S),1,f);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nNot found enter class:");
            break;
              }
              }
              if(flag==0)
                printf("\nNot found enter id:");
}
void modify_city(FILE *f,struct student_info S)
{
    char modify_city[20];
    int flag1=0,flag=0,std_id;
    long L=sizeof(S);
            rewind(f);
                printf("\nStudent Information::\n");
            while(fread(&S,sizeof(S),1,f)==1)
            {
                printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
            }
            rewind(f);
            printf("\n\nEnter Student_id:");
            scanf("%d",&std_id);
            flag=0;
             while(fread(&S,sizeof(S),1,f)==1)
              {
              if(S.id==std_id)
              {
                   flag=1;

                      rewind(f);
            printf("\n\nEnter the city of id for modify::");
            scanf("%s",modify_city);
            fseek(f,0,0);
            flag1=0;
            while(fread(&S,sizeof(S),1,f)==1)
            {
                if(strcmpi(S.city,modify_city)==0)
                {

                    fseek(f,-L,1);//file pointer move that particular record
                    printf("\nEnter New City:");
                    scanf("%s",S.city);
                    fwrite(&S,sizeof(S),1,f);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nNot found enter city:");
            break;
              }
              }
              if(flag==0)
                printf("\nNot found enter id:");
}
void modify_DOB(FILE *f,struct student_info S)
{
     char modify_DOB[20];
    int flag1=0,flag=0,std_id;
    long L=sizeof(S);
            rewind(f);
                printf("\nStudent Information::\n");
            while(fread(&S,sizeof(S),1,f)==1)
            {
                printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",S.std_name,S.id,S.class,S.city,S.DOB);
            }
            rewind(f);
            printf("\n\nEnter Student_id:");
            scanf("%d",&std_id);
            flag=0;
             while(fread(&S,sizeof(S),1,f)==1)
              {
              if(S.id==std_id)
              {
                   flag=1;

                      rewind(f);
            printf("\n\nEnter the DOB of id for modify::");
            scanf("%s",modify_DOB);
            fseek(f,0,0);
            flag1=0;
            while(fread(&S,sizeof(S),1,f)==1)
            {
                if(strcmpi(S.DOB,modify_DOB)==0)
                {

                    fseek(f,-L,1);//file pointer move that particular record
                    printf("\nEnter New DOB:");
                    scanf("%s",S.DOB);
                    fwrite(&S,sizeof(S),1,f);
                    printf("\nRecord Modify Successfully");
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
                printf("\nNot found enter DOB:");
            break;
              }
              }
              if(flag==0)
                printf("\nNot found enter id:");
}
void delete_record(FILE *f,FILE *nf,struct student_info S)
{
    int s_id;
     nf=fopen("d:\\temp.txt","wb+");
                printf("\nEnter id for deleting::");
                scanf("%d",&s_id);
                rewind(f);
                while(fread(&S,sizeof(S),1,f)==1)
                {
                    if(S.id!=s_id)
                    {
                        fwrite(&S,sizeof(S),1,nf);
                    }
                }
                fclose(f);
                fclose(nf);
                remove("d:\\PROJECT.TXT");
                rename("d:\\temp.txt","d:\\PROJECT.TXT");
                f=fopen("d:\\PROJECT.TXT","rb+");
                printf("\nDelete Record Successfully");
}
void sort(FILE *f,struct student_info S)
{
    struct student_info T[30],temp;
    int i=0,j,c=0;
    rewind(f);
    printf("\n------------info. ofstudent-----------");
    while(fread(&S,sizeof(S),1,f)==1)
    {
        T[c]=S;
        c++;
    }
    for(i=0;i<c-1;i++)
    {
        for(j=i+1;j<=c;j++)

            if(strcmpi(T[i].std_name,T[j].std_name)>0)
        {
            temp=T[i];
            T[i]=T[j];
            T[j]=temp;

        }
    }
    for(i=0;i<c;i++)
       printf("\nstd_name=%s,std_id=%d,class=%s,city=%s, DOB=%s",T[i].std_name,T[i].id,T[i].class,T[i].city,T[i].DOB);
}
