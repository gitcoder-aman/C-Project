#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>


struct record
{
char name[20];//name
char cl[10]; //class
char coll[25];//college
char city[15]; //city
int r;  //roll
}s;
void ap();
void sorting();
void sortname();
void sortroll();
void sortclass();
void sortcity();
void sortcollege();
void search();
void searchname();
void searchroll();
void searchclass();
void searchbatchno();
void searchcity();
void searchcollege();
void dis();
void mo();
void moname();
void moroll();
void moclass();
void mobatchno();
void mocity();
void mocollege();
void de();
void dename();
void deroll();
void declass();
void decity();
void decollege();
FILE *fp, *ftemp;
int ch=1,i,j,q=0;
char mn;
long si=sizeof(s);
void graph();
void main()
{
graph();
 clrscr();
do
{
clrscr();

printf("\n %s\t\tWELCOME TO MENU DRIVEN\n",__DATE__);
printf(" %s\t      ==========================",__TIME__);
gotoxy(30,3);
	printf("\n\t________________________\n\t|");
	printf("\t\t\t|\n\t|   <1>.APPEND RECORD   |\n\t|");
	printf("\t\t\t|\n\t|   <2>.DISPLAY RECORD  |\n\t|");
	printf("\t\t\t|\n\t|   <3>.MODIFY RECORD   |\n\t|");
	printf("\t\t\t|\n\t|   <4>.DELETE RECORD   |\n\t|");
	printf("\t\t\t|\n\t|   <5>.SORT RECORD    \t| \n\t|");
	printf("\t\t\t|\n\t|   <6>.SEARCH RECORD   |\n\t|");
	printf("\t\t\t|\n\t|   <0>.EXIT    \t|\n\t|");
	printf("\t\t\t|\n\t|_______________________|\n");
printf("\n\t\t\tEnter your Choice:-->");
gotoxy(46,22);
scanf("%d",&ch);
switch(ch)
{
case 1:
ap();
break;
case 2:
dis();
break;
case 3:
mo();
break;
case 4:
de();
break;
case 5:
sorting();
break;
case 6:
search();
break;
case 0:
exit(1);
default :
gotoxy(46,23);
printf("invalid choice!");
getch();
}
}while(ch!=0);
getch();
}


void ap()//CREATE THE STUDENT INFORMATION
{
mn='y';
fp=fopen("radhe.doc","ab");
while(mn=='y'||mn=='Y')
{clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
fflush(stdin);
printf("\n Enter student Name : ");
gets(s.name);
printf("\n Enter student class:");
gets(s.cl);
printf("\n Enter student roll:");
scanf("%d",&s.r);
fflush(stdin);
printf("\n Enter student city:");
gets(s.city);
printf("\n Enter  college name:");
gets(s.coll);
fwrite(&s,sizeof(s),1,fp);
printf("\nDo you want to insert more records(y/n)->");
scanf(" %c",&mn);
}
fclose(fp);
}



void dis()//DISPLAY STUDENT INFORMATION
{
clrscr();
///printf("\n%s",__DATE__);
///printf("\n%s",__TIME__);
fp=fopen("radhe.doc","rb");
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
{
printf("\n%s",s.name);
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
}
getch();
printf("\n\n");
}




void mo()//MODIFY STUDENT INFORMATION
{
do
{
clrscr();
printf("\n------------MODIFY*MENU----------------");
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\n-->1.STUDENT NAME\n");
printf("-->2.STUDENT ROLL\n");
printf("-->3.STUDENT CLASS\n");
printf("-->4.STUDENT CITY\n");
printf("-->5.STUDENT COLLEGE\n");
printf("-->6.GO TO PREVIOUS MENU\n");
printf("-->7.DISPLAY RECORD\n-->0.EXIT\n");
printf("\n Enter your Choice:-->");
scanf("%d",&ch);
switch(ch)
{
case 1:
moname();
break;
case 2:
moroll();
break;
case 3:
moclass();
break;
case 4:
mocity();
break;
case 5:
mocollege();
break;
case 6:
return;
case 7:
dis();break;
case 0:
exit(1);
default :
printf("invalid choice!");
}
}while(ch!=0);
getch();
}


void moname()
{
clrscr();
char name[20];
int p=0;
fp=fopen("radhe.doc","rb+");
fflush(stdin);
printf("\nEnter the name of student for modification :");
gets(name);
//strcat(name,name1);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.name,name)==0)
{
printf("\n Enter new data :");
printf("\n Enter student Name : ");
gets(s.name);
///strcat(name,name1);
fseek(fp,-si,1);
fwrite(&s,sizeof(s),1,fp);
p=1;
break;
}
}
if(p==0)
{printf("\n Record is not found!");
getch(); }
else
{printf("\n Record is Modified successfully....");
getch();  }
fclose(fp);
}

void moroll()
{
clrscr();
int r,p=0;
fp=fopen("radhe.doc","rb+");
printf("\nEnter the roll of student for modification :");
scanf("%d",&r);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(r==s.r)
{
printf("\n Enter new data :");
printf("\n Enter student roll : ");
scanf("%d",&s.r);
fseek(fp,-si,1);
fwrite(&s,sizeof(s),1,fp);
p=1;
break;
}
}
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Modified successfully....");
getch();}
fclose(fp);
}


void moclass()
{
clrscr();
char cl[10];
int p=0;
fp=fopen("radhe.doc","rb+");
fflush(stdin);
printf("\nEnter the class of student for modification :");
gets(cl);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmp(s.cl,cl)==0)
{
printf("\n Enter new data :");
printf("\n Enter student class : ");
gets(s.cl);
fseek(fp,-si,1);
fwrite(&s,sizeof(s),1,fp);
p=1;
break;
}
}
if(p==0)
{printf("\n Record is not found!");
 getch();}
else
{printf("\n Record is Modified successfully....");
getch();}
fclose(fp);
}
void mocity()
{
clrscr();
char add[20];
int p=0;
fp=fopen("radhe.doc","rb+");
fflush(stdin);
printf("\nEnter the city of student for modification :");
gets(add);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.city,add)==0)
{
printf("\n Enter new data :");
printf("\n Enter student City : ");
gets(s.city);
fseek(fp,-si,1);
fwrite(&s,sizeof(s),1,fp);
p=1;
break;
}
}
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Modified successfully....");
 getch();}
fclose(fp);
}

void mocollege()
{
clrscr();
char coll[20];
int p=0;
fp=fopen("radhe.doc","rb+");
fflush(stdin);
printf("\nEnter the name of student for modification :");
gets(coll);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.coll,coll)==0)
{
printf("\n Enter new data :");
printf("\n Enter student College Name : ");
gets(s.coll);
fseek(fp,-si,1);
fwrite(&s,sizeof(s),1,fp);
p=1;
break;
}
}
if(p==0)
{printf("\n Record is not found!");
getch(); }
else
{printf("\n Record is Modified successfully....");
getch();  }
fclose(fp);
}




void de()//DELETE STUDENT INFORMATION
{
do
{
clrscr();
printf("\n------------DELETE*MENU----------------");
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\n-->1.STUDENT NAME\n");
printf("-->2.STUDENT ROLL\n");
printf("-->3.STUDENT CLASS\n");
printf("-->4.STUDENT CITY\n");
printf("-->5.STUDENT COLLEGE\n");
printf("-->6.GO TO PREVIOUS MENU\n");
printf("-->7.DISPLAY RECORD\n-->0.EXIT");
printf("\n Enter your Choice:-->");
scanf("%d",&ch);
switch(ch)
{
case 1:
dename();
break;
case 2:
deroll();
break;
case 3:
declass();
break;
case 4:
decity();
break;
case 5:
decollege();
break;
case 6:
main();
case 7:
dis();break;
case 0:
exit(1);
default :
printf("invalid choice!");
getch();
}
}while(ch!=0);
getch();
}


void dename()
{
clrscr();
char name[20],name1[25];
int p=0;
fp=fopen("radhe.doc","rb");
printf("\n Enter name for deletion :");
scanf("%s",name);
gets(name1);
strcat(name,name1);
ftemp=fopen("temp.doc","ab");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmp(s.name,name)!=0)
fwrite(&s,sizeof(s),1,ftemp);
else
p=1;
}
fclose(fp);
fclose(ftemp);
remove("radhe.doc");
rename("temp.doc","pk.doc");
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Deleted successfully....");
getch();}
}



void deroll()
{
clrscr();
int r,p=0;
fp=fopen("radhe.doc","rb");
printf("\n Enter roll for deletion :");
scanf("%d",&r);
ftemp=fopen("temp.doc","ab");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(r==s.r)
fwrite(&s,sizeof(s),1,ftemp);
else
p=1;
}
fclose(fp);
fclose(ftemp);
remove("radhe.doc");
rename("temp.doc","pk.doc");
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Deleted successfully.... ");
getch();}
}


void declass()
{
clrscr();
char cl[10];
int p=0;
fp=fopen("radhe.doc","rb");
printf("\n Enter class for deletion :");
scanf("%s",cl);
ftemp=fopen("temp.doc","ab");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmp(s.cl,cl)!=0)
fwrite(&s,sizeof(s),1,ftemp);
else
p=1;
}
fclose(fp);
fclose(ftemp);
remove("radhe.doc");
rename("temp.doc","pk.doc");
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Deleted successfully....");
getch();}
}

void decollege()
{
clrscr();
char coll1[15];
int p=0;
p=0;
fp=fopen("radhe.doc","rb");
fflush(stdin);
printf("\n Enter college for deletion :");
gets(coll1);
//strcat(coll1,coll2);
ftemp=fopen("temp.doc","ab");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.coll,coll1)!=0)
fwrite(&s,sizeof(s),1,ftemp);
else
p=1;
}
fclose(fp);
fclose(ftemp);
remove("radhe.doc");
rename("temp.doc","pk.doc");
if(p==0)
{printf("\n Record is not found!");
 getch();}
else
{printf("\n Record is Deleted successfully....");
getch();}
}

void decity()
{
clrscr();
char city[15];
int p=0;
fp=fopen("radhe.doc","rb");
printf("\n Enter city for deletion :");
scanf("%s",&city);
ftemp=fopen("temp.doc","ab");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(city,s.city)!=0)
fwrite(&s,sizeof(s),1,ftemp);
else
p=1;
}
fclose(fp);
fclose(ftemp);
remove("radhe.doc");
rename("temp.doc","pk.doc");
if(p==0)
{printf("\n Record is not found!");
getch();}
else
{printf("\n Record is Deleted successfully.... ");
getch();}
}



void search()//SEARCH STUDENT INFORMATION
{
do
{
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\n------------SEARCH*MENU----------------");
printf("\n-->1.STUDENT NAME\n");
printf("-->2.STUDENT ROLL\n");
printf("-->3.STUDENT CLASS\n");
printf("-->4.STUDENT CITY\n");
printf("-->5.STUDENT COLLEGE\n");
printf("-->6.GO TO PREVIOUS MENU\n");
printf("-->7.DISPLAY RECORD\n-->0.EXIT");
printf("\n Enter your Choice:-->");
scanf("%d",&ch);
switch(ch)
{
case 1:
searchname();
break;
case 2:
searchroll();
break;
case 3:
searchclass();
break;
case 4:
searchcity();
break;
case 5:
searchcollege();
break;
case 6:
main();
case 7:
dis();break;
case 0:
exit(1);
default :
printf("invalid choice");
}
}while(ch!=0);
getch();
}


void searchname()
{
clrscr();
char name[20];
int p=0;
fp=fopen("radhe.doc","rb");
fflush(stdin);
printf("\nEnter the name of student for searching :");
gets(name);
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.name,name)==0)
{
printf("\n%s",s.name);
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
p=1;
}
}
if(p==1)
{printf("\n Record is searched successfully....");
getch();}
else
{printf("\n Record is not found!");
getch();}
fclose(fp);
}


void searchroll()
{
clrscr();
int r,p=0;
fp=fopen("radhe.doc","rb");
printf("\nEnter the roll of student for searching :");
scanf("%d",&r);
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(r==s.r)
{
printf("\n%s",s.name);
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
p=1;
}
}
if (p==1)
{printf("\n Record is searched successfully....");
getch();}
else
{printf("\n Record is not found!");
getch();}
fclose(fp);
}

void searchclass()
{
clrscr();
char cl[10];
int p=0;
fp=fopen("radhe.doc","rb");
fflush(stdin);
printf("\nEnter the class of student for searching :");
gets(cl);
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.cl,cl)==0)
{
printf("\n%s",s.name);
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
p=1;
}
}
if(p==1)
{printf("\n Record is searched successfully....");
getch();}
else
{printf("\n Record not found!");
getch();}
fclose(fp);
}


void searchcity()
{
clrscr();
char add[20];
int p=0;
fp=fopen("radhe.doc","rb");
fflush(stdin);
printf("\nEnter the city of student for searching :");
gets(add);
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.city,add)==0)
{
printf("\n%s",s.name);
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
p=1;
}
}
if (p==1)
{printf("\n Record is searched successfully....");
getch();}
else
{printf("\n Record is not found!");
getch();}
fclose(fp);
}

void searchcollege()
{
clrscr();
char coll[20];
int p=0;
fp=fopen("radhe.doc","rb");
fflush(stdin);
printf("\nEnter the college of student for searching :");
gets(coll);
clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
printf("\n%s",s.name);
while(fread(&s,sizeof(s),1,fp)==1)
{
if(strcmpi(s.coll,coll)==0)
{
printf("\t\t%s",s.cl);
printf("\t\t%d",s.r);
printf("\t\t%s",s.city);
printf("\t\t%s",s.coll);
p=1;
}
}
if (p==1)
{printf("\n Record is searched successfully....");
getch();}
else
{printf("\n Record is not found!");
getch();}
fclose(fp);
}

void sorting()//SORTING STUDENT INFORMATION
 {
do
{clrscr();
printf("\n%s",__DATE__);
printf("\n%s",__TIME__);
printf("\n------------SEARCH*MENU----------------");
printf("\n-->1.STUDENT NAME\n");
printf("-->2.STUDENT ROLL\n");
printf("-->3.STUDENT CLASS\n");
printf("-->4.STUDENT CITY\n");
printf("-->5.STUDENT COLLEGE\n");
printf("-->6.GO TO PREVIOUS MENU\n");
printf("-->7.DISPLAY RECORD\n");
printf("-->0.EXIT\n");
printf("\n Enter your Choice:-->");
scanf("%d",&ch);
switch(ch)
{
case 1:
sortname();
break;
case 2:
sortroll();
break;
case 3:
sortclass();
break;
case 4:
sortcity();
break;
case 5:
sortcollege();
break;
case 6:
main();
break;
case 7:
dis();
break;
case 0:
exit(1);
default :
printf("invalid choice!");
getch();
}
}while(ch!=0);
getch();
}


void sortname()
{
clrscr();
q=0;
struct record st[50],temp;
fp=fopen("radhe.doc","rb");
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
st[q++]=s;
for (i=0; i<q-1; i++)
{
for(j=i+1;j<q;j++)
{
if(strcmpi(st[i].name,st[j].name)>0)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}

for(i=0; i<q; i++)
{
printf("\n%s",st[i].name);
printf("\t\t%s",st[i].cl);
printf("\t\t%d",st[i].r);
printf("\t\t%s",st[i].city);
printf("\t\t%s",st[i].coll);
 }
getch();
fclose(fp);
}

 void sortroll()
{clrscr();
struct record st[50],temp;
q=0;
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
fp=fopen("radhe.doc","rb");
while(fread(&s,sizeof(s),1,fp)==1)
st[q++]=s;
for (i=0; i<q-1; i++)
{
for(j=i+1;j<q;j++)
{
if(st[i].r>st[j].r)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}
for(i=0; i<q; i++)
{
printf("\n%s",st[i].name);
printf("\t\t%s",st[i].cl);
printf("\t\t%d",st[i].r);
printf("\t\t%s",st[i].city);
printf("\t\t%s",st[i].coll);
}
getch();
fclose(fp);
 }

void sortclass()
{clrscr();
struct record st[50],temp;
q=0;
fp=fopen("radhe.doc","rb");
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
st[q++]=s;
for(i=0; i<q-1; i++)
{
for(j=i+1;j<q;j++)
{
if(strcmpi(st[i].cl,st[j].cl)>0)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}
for(i=0; i<q; i++)
{
printf("\n%s",st[i].name);
printf("\t\t%s",st[i].cl);
printf("\t\t%d",st[i].r);
printf("\t\t%s",st[i].city);
printf("\t\t%s",st[i].coll);
}
 getch();
 fclose(fp);
 }

 void sortcity()
{
clrscr();
q=0;
struct record st[50],temp;
fp=fopen("radhe.doc","rb");
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
st[q++]=s;
for (i=0; i<q-1; i++)
{
for(j=i+1;j<q;j++)
{
if(strcmpi(st[i].city,st[j].city)>0)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}

for(i=0; i<q; i++)
{
printf("\n%s",st[i].name);
printf("\t\t%s",st[i].cl);
printf("\t\t%d",st[i].r);
printf("\t\t%s",st[i].city);
printf("\t\t%s",st[i].coll);
 }
getch();
fclose(fp);
}

void sortcollege()
{
clrscr();
q=0;
struct record st[50],temp;
fp=fopen("radhe.doc","rb");
printf("\nNAME\t\t CLASS\t\t ROLL\t\t CITY\t\t COLLEGE NAME");
printf("\n****************************************************************************");
while(fread(&s,sizeof(s),1,fp)==1)
st[q++]=s;
for (i=0; i<q-1; i++)
{
for(j=i+1;j<q;j++)
{
if(strcmpi(st[i].coll,st[j].coll)>0)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}

for(i=0; i<q; i++)
{
printf("\n%s",st[i].name);
printf("\t\t%s",st[i].cl);
printf("\t\t%d",st[i].r);
printf("\t\t%s",st[i].city);
printf("\t\t%s",st[i].coll);
 }
getch();
fclose(fp);
}
void graph()
    {
	     /*    FRONT PAGE   */
int gd=DETECT,gm,i,j,k;
initgraph(&gd,&gm,"\\tc\\bgi");

rectangle(0,0,638,478); rectangle(5,5,633,473); rectangle(10,10,628,468); rectangle(15,15,623,463);
line(560,15,15,463); line(15,160,200,463); setfillstyle(1,12); floodfill(1,1,WHITE);
setfillstyle(1,15); floodfill(6,6,WHITE);  setfillstyle(1,10); floodfill(11,11,WHITE);
setfillstyle(1,9); floodfill(563,16,WHITE); setfillstyle(1,4); floodfill(16,16,WHITE);
setfillstyle(1,6); floodfill(16,205,WHITE); setfillstyle(1,3); floodfill(20,460,WHITE);

/* LEFT DRAW LINE FORMATE */
setcolor(2);  settextstyle(10,0,3);
outtextxy(100,25,"Mirza Ghalib College");
settextstyle(2,0,4); setcolor(4);
outtextxy(390,270,"Professor Of Mirza Ghalib College");// outtextxy(330,350,"14 Years Teaching Experience");
setcolor(YELLOW); settextstyle(7,0,4);
settextstyle(2,0,6);   outtextxy(90,186,"<DEVELOPED BY>");
outtextxy(350,136,"<UNDER THE GUIDELINES OF>");
outtextxy(20,235,"ST_NAME :");  outtextxy(20,265,"CLASS :");
outtextxy(20,295,"ROLL.no. :"); outtextxy(20,325,"TOPIC :");
outtextxy(20,355,"SESSION :");  outtextxy(20,387,"MOB.no :");
settextstyle(10,0,2);  outtextxy(380,220,"TAHSEEN SIR");
 /* INPUT INFO */
setcolor(14); settextstyle(2,0,5);  outtextxy(130,237,"**Enter your name**");
outtextxy(130,267,"BCA-II");  outtextxy(130,297,"08");
outtextxy(130,327,"College Admission");  outtextxy(130,357,"2019-20"); outtextxy(130,387,"**enter mobile no ");
/*info reac formet */
rectangle(120,235,300,255); rectangle(120,265,300,285); rectangle(120,295,300,315);
rectangle(120,325,300,345); rectangle(120,355,300,375); rectangle(120,385,300,405);
ellipse(480,254,0,360,130,50); ellipse(480,254,0,360,135,55); ellipse(480,254,0,360,140,60);

for(i=1;i<=100;i++)
{
setcolor(1+i);  settextstyle(7,0,5);
outtextxy(0,-15,"*****************************************");
outtextxy(17,450,"**************************************");
settextstyle(7,1,5);
outtextxy(-15,12,"*****************************");
outtextxy(610,12,"*****************************");
}
closegraph();
}

/*  CLOSE FRONT PAGE  */


