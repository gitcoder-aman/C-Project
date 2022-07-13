#include<stdio.h>
main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("d:\\f1.txt","w");
    if(fp==NULL)
    {
        printf("\nFile Not created::");
        exit(0);
    }
    printf("\nEnter a String:");
    gets(s);
    for(i=0;i<strlen(s);i++)
       fputc(s[i],fp);
       fclose(fp);

}
