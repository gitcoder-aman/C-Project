#include<stdio.h>
main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("d:\\aman.txt","w");
    printf("\nEnter Something about yourself (ctrl +z to exit)::\n");
    while( (ch=getchar()) !=EOF)//End of File "ctrl+z"
     //getchar= one by one character checking
   fputc(ch,ptr);//Writing one character at a time through fputc();
   fclose(ptr);
}
