#include<stdio.h>
main()
{
    FILE *fp;
    /*fp=fopen("d:\\MYFILE.txt","w");
    fprintf(fp,"Hello Welcome to C");
    fclose(fp);*/
    char ch;
    fp=fopen("d:\\MYFILE.txt","w");
    fprintf(fp,"Hello! i am learn programing in C language.\n");
   // while( (ch=getchar()) !=EOF)
     //   fputc(ch,fp);
        fclose(fp);
}
