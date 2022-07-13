#include<stdio.h>
main()
{
    char ch;
    FILE *fp;
    fp=fopen("d:\\f1.txt","r");
    if(fp==NULL)
    {
        printf("\nFile Not Found:: ");
        exit(0);
    }
    ch=fgetc(fp);
    while(!feof(fp)){
        printf("%c",ch);
        ch=fgetc(fp);}
    fclose(fp);
}
