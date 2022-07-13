#include<stdio.h>
main()
{
   struct
   {
       long college_code;
       char college_name[40];
       char city[10];
       int estd;

       struct
       {
	  int student_id;
	  char student_name[40];
	  int student_roll;
	  char class[10];
       }std;
   }clg;
    printf("\nEnter estd of college::");
   scanf("%d",&clg.estd);

   printf("\nEnter college_code ::");
   scanf("%ld",&clg.college_code);
   fflush(stdin);
   printf("\nEnter college_name ::");
   gets(clg.college_name);

   printf("\nEnter in which city is the college located::");
   gets(clg.city);
   printf("\n-------Enter Record of student-------::");
   fflush(stdin);
   printf("\nEnter id of Student::");
   scanf("%d",&clg.std.student_id);
   fflush(stdin);
   printf("\nEnter Name of Student::");
   gets(clg.std.student_name);
   fflush(stdin);
    printf("\nEnter Student_Roll::");
   scanf("%d",&clg.std.student_roll);
   fflush(stdin);
   printf("\nEnter Class of student::");
   gets(clg.std.class);

   printf("\n::*********Displaying info. of college********::");
   printf("\nEstd of college=%d\nCollege_code=%d\nCollege_Name=%s\nWhich city is the college located=%s:",clg.estd,clg.college_code,clg.college_name,clg.city);
   printf("\n\n::*******Displaying info. of college of Student********::");
   printf("\n\nId of student=%d\nName of Student=%s\nStudent_Roll=%d\nClass of the student=%s\n",clg.std.student_id,clg.std.student_name,clg.std.student_roll,clg.std.class);
}
