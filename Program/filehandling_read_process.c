#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("d:\\f1.txt","r");
    if(ptr==NULL)
    {
        printf("\nfile Not Exits::");
        exit(0);
    }
    printf("\nContents of File aman is ::\n");
    while((ch=fgetc(ptr))!=EOF)
        printf("%c",ch);
    fclose(ptr);
    printf("\n------THE END-------");
}
