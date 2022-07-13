#include<stdio.h>
main()
{
    FILE *fp;
    char ch[10];
    fp=fopen("d:\\f1.txt","r");
    if(fp==NULL)
    {
        printf("\nFile not Found::");
        exit(0);
    }
    while(fgets(ch,9,fp)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);
}
