#include<stdio.h>
main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("d:\\INDIA.TXT","w");

    printf("\nWrite Something About India::\n");
    while((ch=getchar())!=EOF)
        fputc(ch,ptr);

    fclose(ptr);

}
