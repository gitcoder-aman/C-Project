#include<stdio.h>
#include<conio.h>
main()
{   char  s[100];int i=0,v=0;
   printf("enter any sentence=");
   gets(s);
   while(s[i]!='\0')
   {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        v=v+1;
        i++;
   }
   printf("total no of vowel in given sentence=%d",v);
   getch();

}
