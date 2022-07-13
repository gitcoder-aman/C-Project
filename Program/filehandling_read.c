#include<stdio.h>
main()
{
    FILE *fp;
    char filedata[50];
    fp=fopen("d:\\MYFILE.txt","r");
    while(!feof(fp))// file end of file
    {
        fgets(filedata,50,fp);
        printf(filedata);
    }
}
