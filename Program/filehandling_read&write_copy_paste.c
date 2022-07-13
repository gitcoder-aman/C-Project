#include<stdio.h>
main()
{
    FILE *ptr1,*ptr2;
    char ch;
     ptr1= fopen("d:\\aman.TXT","r");
     ptr2= fopen("d:\\AKM.txt","w");
    if(ptr1==NULL)
    {
        printf("\nFILE IS NOT CREATED::");
        exit(0);
    }
    while((ch=(fgetc(ptr1)))!=EOF)
    {
    printf("%c",ch);
    fputc(ch,ptr2);
    }
    printf("\nCopy file successfully");
    fclose(ptr1);
    fclose(ptr2);

}
