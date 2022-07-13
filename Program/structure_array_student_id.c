#include<stdio.h>
struct student
    {
        int id;
        char first_name[20];
        char last_name[20];
        int score;
    };
main()
{
    struct student E;
    int sum=0,i,scr[5];
    float per;
    printf("\nEnter student Id: ");
    scanf("%d",&E.id);
    fflush(stdin);
    printf("\nEnter first name of student: ");
    gets(E.first_name);
    printf("\nEnter last name of student: ");
    gets(E.last_name);
    for(i=0;i<5;i++)
    {
        fflush(stdin);
    printf("\nEnter marks of Student[%d]:",i);
    scanf("%d",&scr[i]);
    if(scr[i]<=100)
    sum=sum+scr[i];
    }
    per=(float)sum/5;
    printf("\npercentage Total score  of student :%f",per);
}
