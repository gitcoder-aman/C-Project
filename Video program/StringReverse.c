#include<stdio.h>
int main()
{
    char str[40],ch;
    int i,length;
    printf("Enter a string:");
    gets(str);
    
      for ( length = 1; str[length]!=0; length++);// length=4
   

     /* for ( i = 0; i < length/2; i++)
     {
        
        ch=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=ch;
     }*/
//OR
     for ( i = 1; i <= length/2; i++)
     {
         ch=str[i-1];
        str[i-1]=str[length-i];
        str[length-i]=ch;
     }
     
     printf("Reverse Strings:=%s",str);
    
}
