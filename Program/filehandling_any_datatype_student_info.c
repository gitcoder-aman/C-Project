#include<stdio.h>
#include<string.h>//during of inputting taking space character because i am using gets() function but output is not showing.
main()            // but during of inputting not taking space character then output is showing..as why?
{
      char name[40];
    char class[10];
    char city[20];
    int roll;

    FILE *f;

    f=fopen("d:\\student_info.txt","w+");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\n::----------STUDENT RECORD--------::\n");
        printf("\nEnter Student's Name::");
        gets(name);
        printf("\nEnter Class::");
        gets(class);
        printf("\nEnter City::");
        gets(city);
        printf("\nEnter Roll no::");
        fflush(stdin);
        scanf("%d",&roll);
        fprintf(f,"%s %s %s %d",name,class,city,roll);
    }
     rewind(f);
    printf("\nDisplay that Students only which are living in Gaya::\n");

    while(fscanf(f,"%s %s %s %d",name,class,city,&roll)!=EOF)
    {

         if((strcmpi(city,"GAYA"))==0)
         {
             printf("\nName=%s , Class=%s City=%s Roll=%d",name,class,city,roll);
         }
     }

}

