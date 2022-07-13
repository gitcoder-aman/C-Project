#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[40];
    int i,length,k;
    printf("Enter a string:");
    gets(str);
    

      for ( length = 1; str[length]!=0; length++);

   k=0;
   length--;
   while (length > k)
   {
       if (str[length]!=str[k])
       {
           printf("%s is not palindrome",str);
           exit(0);
       }
       length--;
       k++;
   }
   printf("%s is palindrome",str);
}
    
