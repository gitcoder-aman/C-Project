#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("d:\\aman.doc","a");
    printf("\nWrite Something about aman::\n ");
    while((ch=getchar())!=EOF)
    fputc(ch,ptr);

    fclose(ptr);

    ptr=fopen("d:\\aman.doc","r");
    if(ptr==NULL)
    {
        printf("\nFile not created:");
        exit(0);
    }
    printf("\nDisplaying Contents of aman.doc file:\n");
    while((ch=fgetc(ptr))!=EOF)
        printf("%c",ch);
    printf("\n------THE END------");
    fclose(ptr);
}
