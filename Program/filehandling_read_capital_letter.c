#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
    FILE *ptr;
    char ch;
   /* ptr=fopen("d:\\aman.txt","w");
    printf("\nEnter Something About Yourself:\n\n");
    while((ch=getchar())!=EOF)
    fputc(ch,ptr);
    fclose(ptr);
*/

   ptr= fopen("d:\\aman.TXT","r");
    if(ptr==NULL)
    {
        printf("\nFILE IS NOT CREATED::");
        exit(0);
    }
    printf("\nContents of file aman.TXT is::\n");
    while((ch=toupper(fgetc(ptr)))!=EOF)
    printf("%c",ch);
    printf("\n---------THE END-----------");
    fclose(ptr);

}
