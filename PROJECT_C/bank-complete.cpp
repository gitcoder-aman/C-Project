#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*name =name
age=age
add=address
mob=main mobile number
adh=aadhar number main
fn=father name
mn=mother name
nn=nominee name
n_mob=nominee mobile numner
n_ad_n=nominee aadhar number
n_adh=nominee aadhar number
n_r=nominee relation
mny=money*/
struct bank
{
	char name[25];
	int age;
	char gnd[7];
	char add[30];
	char mob[15];
	char adh[20];
   	char acc[20];
	char fn[20];
	char mn[25];
	char nn[25];
	char n_mob[15];
	char n_add[30];
	char n_adh[20];
	char n_r[15];
	double  mny;
}s,bk[50],tp;

FILE *fpt,*fp1;
//long l=sizeof(s);
int op,i;
void ac_info();
void dis_main();
int sc(char[]);
void add();
void acc_det();
void deposit();
void withdraw();
void receipt(char[],double,int);
//void main()
int main()
{
	//clrscr();
	fpt=fopen("d:\\Aman_Bank.txt","rb+");
	if(fpt==NULL)
	fpt=fopen("d:\\Aman_Bank.txt","wb+");
	dis_main();
	getch();
	return 0;
}
void dis_main()
{

	do{


	printf("\n 0 - exit");
	printf("\n 1 - new account");
	printf("\n 2 - account information");
	printf("\n 3 - account details");
	printf("\n 4 - deposit");
	printf("\n 5 - withdraw");
	printf("\n 6 - search ");
	printf("\n 7 - delete");

	printf("\n enter choice =");
	scanf("%d",&op);
	switch(op)
	{
		case 0:
			fclose(fpt);
			exit(0);

		case 1:
			add();
			break;
		case 2:
			ac_info();
			break;
		case 3:
			acc_det();
			break;
			case 4:
				deposit();
				break;
				case 5:
					withdraw();
					break;
		default:
			printf("\n invalid choice");
	}
	}while(1);
}
// insertion
void add()
{
	system("cls");
	int ch;
	char acc[17];
		fpt=fopen("d:\\Aman_Bank.txt","rb+");
	if(fpt==NULL)
	fpt=fopen("d:\\Aman_Bank.txt","wb+");

	fseek(fpt,0,2);
	printf("\n [NEW ACCOUNT CREATION] ");
	check:
	printf("\n enter account number(16 digit) =");
	scanf("%s",acc);
ch=sc(acc);
if(ch==0)
	goto check;
	else
	strcpy(s.acc,acc);
	printf("\n NAME =");
	fflush(stdin);
	gets(s.name);
	printf("\n AGE =");
	fflush(stdin);
	scanf("%d",&s.age);
	printf("\n GENDER =");
	fflush(stdin);
	gets(s.gnd);
	printf("\n MOBILE NO =");
	fflush(stdin);
	gets(s.mob);
	printf("\n ADDRESS =");
	fflush(stdin);
	gets(s.add);
	printf("\n AADHAR NUMBER =");
	fflush(stdin);
	gets(s.adh);
	printf("\n FATHER'S NAME =");
	fflush(stdin);
	gets(s.fn);
	printf("\n MOTHER'S NAME =");
	fflush(stdin);
	gets(s.mn);
	printf("\n NOMINEE NAME =");
	fflush(stdin);
	gets(s.nn);

	printf("\n NOMINEE ADDRESS =");
	fflush(stdin);
	gets(s.n_add);
	printf("\n NOMINEE MOBILE NUMBER =");
	fflush(stdin);
	gets(s.n_mob);
	printf("\n NOMINEE AADHAR NUMBER =");
	fflush(stdin);
	gets(s.n_adh);
	printf("\n NOMINEE RELATION =");
	fflush(stdin);
	gets(s.n_r);
	printf("\n opening balance for any account is RS 1000");
	s.mny=1000;


	fwrite(&s,sizeof(s),1,fpt);
	fclose(fpt);

}
//checking
int sc(char str[20])

{
	int f=0,i,c=0,f1=0;
	while(str[i]!='\0')
	{

	c++;
	i++;
     }
	if(c<16 || c>16)
	{
		printf("\n plz enter 16 digit account number");
		return (0);
	}
	else
	f=1;
	// checking presence of same account number
	if(f==1)
	{


	rewind(fpt);

		while(fread(&s,sizeof(s),1,fpt)==1)
		{
			if(strcmpi(s.acc,str)==0)
			{

		       f1=1;
		       break;
	        }
	    }

	   if (f1==1)
	    {

	    printf("\n account number is taken , plz input again and different");
	    return 0;
	}
	    else
	    return 1;
	}


}
void ac_info()
{
system("cls");
	//rewind(fpt);
	fpt=fopen("d:\\Aman_Bank.txt","rb+");
printf("\n name \t\t address \t account number");
	while(fread(&s,sizeof(s),1,fpt)==1)
	{
		printf("\n %s \t\t %s \t\t %s",s.name,s.add,s.acc);
		printf("\n---------------------------------------------------------------------------------");
	}
	fclose(fpt);

}

void acc_det()
{

//	rewind(fpt);
fpt=fopen("d:\\Aman_Bank.txt","rb+");
	char nam[25];
	int c=0,f=0;

	fflush(stdin);
	printf("\n enter name for information \n= ");
	gets(nam);

	printf("\n\t\t\t DETAILS OF   ");
	puts(nam);
	while(fread(&s,sizeof(s),1,fpt)==1)
	{
	if(strcmpi(s.name,nam)==0)
	{
	f=1;
	printf("\n\t\t--------------------------------------------------");
	printf("\n\t\t | name                 =   %s ",s.name);
    printf("\n\t\t | account number       =   %s ",s.acc);
	printf("\n\t\t | age                  =   %d ",s.age);
	printf("\n\t\t | address              =   %s ",s.add);
	printf("\n\t\t | gender               =   %s ",s.gnd);
	printf("\n\t\t | mob                  =   %s ",s.mob);
	printf("\n\t\t | aadhar               =   %s ",s.adh);
	printf("\n\t\t | father's name        =   %s ",s.fn);
	printf("\n\t\t | mother's name        =   %s ",s.mn);
	printf("\n\t\t | nominee name         =   %s ",s.nn);
	printf("\n\t\t | nominee address      =   %s ",s.n_add);
	printf("\n\t\t | nominee mobile       =   %s ",s.n_mob);
	printf("\n\t\t | nominee aadhar no    =   %s ",s.n_adh);
	printf("\n\t\t | nominee relationn    =   %s ",s.n_r);
	printf("\n\t\t | balance              =   %.2lf ",s.mny);
	printf("\n\t\t--------------------------------------------------");
	 }
	}
	if(f==0)
	printf("\n name not found");
	fclose(fpt);
}
void withdraw()
{
	double my,mny;
	int f=0,a=1;
	char ac1[20],rc;
//rewind(fpt);
fpt=fopen("d:\\Aman_Bank.txt","rb+");
fp1=fopen("d:\\mny.txt","wb+");
		fflush(stdin);
	printf("\n enter account number for withdraw = ");
	scanf("%s",ac1);
	while(fread(&s,sizeof(s),1,fpt)==1)
	{
		if(strcmpi(s.acc,ac1)==0)
		{
			printf("\n available balance = %.2lf",s.mny);
			again:
	            printf("\n enter money for withdraw = ");
             	scanf("%lf",&my);
	         if(my>0)
	         {
             	mny=s.mny-my;
	            s.mny=mny;
	            f=1;
	            printf("\n withdraw of money successfully");
			    fwrite(&s,sizeof(s),1,fp1);
	       	 }
		     else
		     {
		      printf("\n enter amount greater than 0");
		      goto again;
	         }
	    }
	    else
	      fwrite(&s,sizeof(s),1,fp1);
	  }
	  if(f==0)
         printf("\n account number doesn't exist");
	      fclose(fpt);
      fclose(fp1);
      remove("d:\\Aman_Bank.txt");
      rename("d:\\Aman_Bank.txt","d:\\Aman_Bank.txt");
      fpt=fopen("d:\\Aman_Bank.txt","rb+" );
      printf("\n do u want to take receipt :(y/n) = " );
      fflush(stdin);
      scanf("%c",&rc);
      if (rc=='y'|| rc=='Y')
      receipt(ac1,my,a);
      else
      printf("\n thank u .......");

fclose(fpt);

}
void deposit()
{
	double my,mny;
	int f=0,a=2;
	char ac1[20];
	char rc;
//rewind(fpt);
fpt=fopen("d:\\Aman_Bank.txt","rb+");
fp1=fopen("d:\\mny.txt","wb+");
		fflush(stdin);
	printf("\n enter account number for deposit\n= ");
	scanf("%s",ac1);
	while(fread(&s,sizeof(s),1,fpt)==1)
	{
		if(strcmpi(s.acc,ac1)==0)
		{
			printf("\n available balance = %.2lf",s.mny);
			again:
	            printf("\n enter money for deposit = ");
             	scanf("%lf",&my);
	         if(my>0)
	         {
             	mny=s.mny+my;
	            s.mny=mny;
	            f=1;
	            printf("\n deposit of money successfully");
			    fwrite(&s,sizeof(s),1,fp1);
	       	 }
		     else
		     {
		      printf("\n enter amount greater than 0");
		      goto again;
	         }
	    }
	    else
	      fwrite(&s,sizeof(s),1,fp1);
	  }
	  if(f==0)
         printf("\n account number doesn't exist");
	      fclose(fpt);
      fclose(fp1);
      remove("d:\\Aman_Bank.txt");
      rename("d:\\mny.txt","d:\\Aman_Bank.txt");
      fpt=fopen("d:\\Aman_Bank.txt","rb+" );
      printf("\n do u want to take receipt :(y/n) = " );
      fflush(stdin);
      scanf("%c",&rc);
      if (rc=='y'|| rc=='Y')
      receipt(ac1,my,a);
      else
      printf("\n thank u .......");


fclose(fpt);

}
void receipt(char str[20],double amount,int a1)
{
	system("cls");
	printf("\n\n\t\t   ------- RECEIPT FORM -------");
	fpt=fopen("d:\\Aman_Bank.txt","rb+");
	while(fread(&s,sizeof(s),1,fpt)==1)
	{
		if(strcmpi(s.acc,str)==0)
		{
			//printf("\n\t   -------------------------------------------------------");
			printf("\n\t\t | account name= %s",s.name);
			printf("\n\t\t | account number = %s",s.acc);
			printf("\n\t\t | available balance=%lf",s.mny);
			if (a1==2)
			printf("\n\t\t | money deposited=%lf",amount);
			else
			printf("\n\t\t | money withdrawal=%lf",amount);
			printf("\n\n\t\t\t thank u ..... ");
		}
	}
}
