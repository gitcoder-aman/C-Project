#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
    FILE *ptr;
    char ch;
    int v=0,c=0,d=0,sp=0;
    ptr=fopen("d:\\INDIA.TXT","r");
    if(ptr==NULL)
    {
        printf("\nFILE NOT CREATED::");
        exit(0);
    }
    printf("\n------Dispalying Contents of INDIA.TXT file::------\n\n");

    while((ch=tolower(fgetc(ptr)))!=EOF)
    {
        printf("%c",ch);

        if(ch>=97 && ch<=122)
      {
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++;
            else
            c++;
      }
      else if(ch>='0' && ch<='9')
        d++;
      else
        sp++;

    }
    printf("\nIndia.txt File Displaying the Vowels,Consonant,digit and special character::\n");
    printf("\nVowels=%d,conosonants=%d,Digit=%d,special character=%d\n",v,c,d,sp);
    fclose(ptr);
}
