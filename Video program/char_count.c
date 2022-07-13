#include<stdio.h>
int main()
{
    int count=1;
    char str[40];
    printf("Enter Any Sentence=");
   gets(str);
   
  // for ( count = 1; str[count]!=0; count++);
  //OR AS ALSO
   while (str[count]!=0)
   {
       count++;
   }
   
   
   
    printf("Count Character=%d",count);
    
}
