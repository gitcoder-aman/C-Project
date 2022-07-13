#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct bank_info
{
    char user_name[40];
    char ifsc_code[40];
    char user_account_no[30];
     char user_PH_NO[10];
};
void insert_user_info(FILE *,struct bank_info);
void Display_user_Info(FILE *,struct bank_info);
/*void search_user_account(FILE *,struct bank_info);
void search_user_name(FILE *,struct bank_info);
void modify_user_name(FILE *,struct bank_info);
void modify_user_account(FILE *,struct bank_info);
void delete_user_info(FILE *,FILE *,struct bank_info);
void sort_user_name(FILE *,struct bank_info);*/

void Deposite(struct bank_info);
void Transfer(struct bank_info);
void Withdrow(struct bank_info);

void check_detail(struct bank_info);
//int list1();

float Total_Amount=1000.0,Tr=0,Total_Deposite=0,Total_Withdrow=0;
char Acc[30];
main()
{
    printf("\n\t\t\t\tBANKING SYSTEM\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME TO STATE BANK OF INDIA\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \n");
    printf("\nCreated By Aman Kumar\n\n");
    printf("\nPlease enter any key press to continue: k");
    getch();
    struct bank_info BK;
    int op,op1,op2,op3;
    FILE *fpt;
    fpt=fopen("d:\\BANK.TXT","rb+");
    if(fpt==NULL)
    {
        fpt=fopen("d:\\BANK.TXT","wb+");
    }
    do
    {
        loop:
        lable:
            lable1:
                lable2:
        printf("\n------------MENU-------------");
        printf("\n0)EXIT:\n1)TRANSACTION_PROCESS:\n2)DISPLAY_USER_INFO:\n3)SEARCH_INFO:\n4)MODIFY_INFO:\n5)DELETE_INFO:\n6)SORT_INFO:\n");
        scanf("%d",&op);
        switch(op)
        {
        case 0:
            printf("\nHave a nice day:");
            fclose(fpt);
            exit(0);
        case 1:
            //system("cls");
             //printf("\n0>PREVIOUS_MENU:\n1>INSERT_INFO:\n2")
             insert_user_info(fpt,BK);

           do
             {
                 printf("\nChoose What do you want to do:\n");
            printf("-----------------------------------------");
                 printf("\n0.PREVIOUS MENU:\n1.DEPOSITE AMOUNT:\n2.WITHDROW AMOUNT:\n3.TRANSFER AMOUNT:\n4.BALANCE_ENQUIRY:\n");
                    scanf("%d",&op3);
             switch(op3)
             {
             case 1:
                Deposite(BK);
                break;
             case 2:
                Withdrow(BK);
                break;
             case 3:
                Transfer(BK);
                break;
             case 4:
                check_detail(BK);
                break;
             case 0:
                system("cls");
              goto loop;
             default:
                printf("\nInvalid Choose Option:");
             }

             }while(1);//End of down loop;             }
            break;
        case 2:
            Display_user_Info(fpt,BK);
            break;
      /*  case 3:
           system("cls");
           printf("\n0>PREVIOUS_MENU:\n1>USER_NAME:\n2>USER_ACCOUNT:");
           printf("\nWhat do you want to search:");
           scanf("%d",&op1);
           switch(op1)
           {
           case 0:
               system("cls");
            goto lable;
           case 1:
            search_user_name(fpt,BK);
            break;
           case 2:
            search_user_account(fpt,BK);
            break;
           }
           break;
       case 4:
          system("cls");
          printf("\n0>PREVIOUS_MENU:\n2>MODIFY_USER_NAME:\n3>MODIFY_BANK_NAME\n4>MODIFY_USER_ACCOUNT:");
          printf("\nWhat do you want to modify:");
          scanf("%d",&op2);
          switch(op2)
            {
            case 0:
                system("cls");
                goto lable1:

            case 1:
                modify_bank_name(fpt,BK);
                break;
            case 2:
                modify_user_account(fpt,BK);
                break;
            }
            break;
        case 5:
            delete_user_info(fpt,BK);
            break;
        case 6:
            sort_user_name(fpt,BK);
            break;
        default:
            printf("\nINVALID CHOICE:");*/
        }// end of main switch;
    }while(1);// end of uper loop;
}// end of main;
/*int list1()
{
    int ch;
    printf("\n0.PREVIOUS MENU\n1.DEPOSITE AMOUNT:\n2.WITHDROW AMOUNT:\n3.TRANSFER AMOUNT:\n4.CHECK DETAILS:");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    return(ch);
}*/
void Display_user_Info(FILE *f,struct bank_info ck)
{
    rewind(f);
        printf("\n*******Check Your Process:**********");
        printf("\n\t\t\t______________________________");
printf("\n\t\t\t\tSTATE BANK OF INDIA\n");
printf("\t\t\t______________________________\n\n");
    while(fread(&ck,sizeof(ck),1,f)==1)
   {
       printf("\nYour Name=%s",ck.user_name);
    printf("\nAccount Number=%s",ck.user_account_no);
    printf("\nIfsc Code=%s",ck.ifsc_code);
    printf("\nPH Number=%s",ck.user_PH_NO);
   }
    printf("\nTotal Amount=%f",Total_Amount);
    /*printf("\nTotal Deposite Amount=%f",Total_Deposite);
    printf("\nTotal Withdrow Amount=%f",Total_Withdrow);
    printf("\nTransfer Account No=%ld",Acc);
    printf("\nTotal Transfer Amount=%f",Tr);*/
}
void insert_user_info(FILE *f,struct bank_info BK)
{
    fseek(f,0,2);
    fflush(stdin);
    printf("\nEnter Your Name:");
    gets(BK.user_name);
     printf("\nEnter Your Account NO.");
    gets(BK.user_account_no);

    printf("\nEnter IFSC CODE:");
    gets(BK.ifsc_code);

    printf("\nEnter User Ph.no:");
    gets(BK.user_PH_NO);
    fwrite(&BK,sizeof(BK),1,f);
}
void Deposite(struct bank_info BK)
{
    printf("\n\t\t\t*DEPOSITE AMMOUNT*\n\n");
    printf("How Much Money do You Want to deposite:");
    scanf("%f",&Total_Deposite);
    if(Total_Deposite > 0 && Total_Deposite<=20000)
     {
       printf("\nYour %2fRs Deposite in your Account \n\n",Total_Deposite);
      Total_Amount+=Total_Deposite;

     }
  else if(Total_Deposite>20000)
   {
     printf("\nYou can't Deposite That much Ammount in one Time.\n\n");
   }
  else
   {
     printf("\nInvalid Deposite Ammount\n");
   }
}
void Withdrow(struct bank_info BK)
{
    printf("\n\t\t\t*WITHDROW AMMOUNT*\n\n");
    printf("\n----------------------------\n");
    printf("How much Money do you want to Withdraw:");
    scanf("%f",&Total_Withdrow);

    if(Total_Withdrow <= Total_Amount && Total_Withdrow <= 20000)
   {
        printf("\nYou just Withdraw %2fRs\n\n",Total_Withdrow);
       Total_Amount-=Total_Withdrow;

   }
     else if(Total_Withdrow>20000)
        {
           printf("\ninsfficient Balance Please Enter less ammount:\n\n");
        }
          else
            {
                printf("You don't have Enough Money\n\n");
            }

}
void Transfer(struct bank_info BK)
{
    printf("\n\t\t\t*TRANSFER*\n\n");
    printf("\n\t\tAccount You want To Transfer:");
    scanf("%s",Acc);
    printf("\nHow much Ammount?:");
    scanf("%f",&Tr);
   if(Total_Amount >= Tr)
     {
       printf("\nYour %2fRs Successfully Transfered\n\n",Tr);
      Total_Amount-=Tr;

     }
     else
     {
        printf("You do not have sufficient Balance\n\n:");
     }
}
void check_detail(struct bank_info LK)
{
  system("cls");
  printf("\n\t\t\t______________________________");
  printf("\n\t\t\t\tSTATE BANK OF INDIA\n");
  printf("\t\t\t______________________________\n\n");
  printf("\t\t\tDate:09/08/20\t    Time:10:20 Am\n");
  printf("\n\n\t\t\t Your Name: %s\n\n",LK.user_name);
  printf("\t\t\t Your Account no: %s\n\n",LK.user_account_no);
  printf("\t\t\tIfsc code of Bank: %s\n\n",LK.ifsc_code);
  printf("\t\t\tYour Mobile NO: %s\n\n",LK.user_PH_NO);
  printf("\t\t\tYour Total_Amount=%f",Total_Amount);
  if(Total_Deposite >=0 && Total_Deposite<=20000)
   {
     printf("\t\t\4You have Deposite: %2fRs\n",Total_Deposite);
   }
  else
     printf("\t\t\4You have deposite: 0Rs\n");
    if(Total_Withdrow>0 && Total_Withdrow<=20000 && Total_Withdrow<=Total_Amount)
  {
    printf("\t\t\4You have Withdraw: % 2fRs\n",Total_Withdrow);
  }
  else
  {
    printf("\t\t\t\4You have Withdraw: 0Rs\n");
  }
  if(Tr>0 && Tr<=20000 && Tr<=Total_Amount)
  {
      printf("\t\t\t\4You have Transfered: %2fRs\n",Tr);
  }
  else
   {
      printf("\t\t\t\4You have Transfered: 0Rs\n");
   }
      printf("\n\t\t\t    Thank You!\n");
      printf("\t\t\t   WELCOME TO STATE BANK OF INDIA");
      printf("\t\t\t   www.statebankofindia.com\n");
      getch();
}
