#include<stdio.h>
#include<string.h>
main()
{
    int *ptr; char ch[20];
    ptr=&ch;
    printf("\nEnter any String::" );
    gets(ch);

    *ptr=strlen(ch);
    printf("\nLength of String::=%d",*ptr);

}

