#include<stdio.h>
#include<string.h>
    struct emp
    {
        char name[40];
        char code[10];
        char city[10];
    };
    main()
    {
    struct emp E[2];
    char se[10];int flag=0,i,search;
    for(int i=0;i<2;i++)
    {
    printf("\nEnter Name:");
    gets(E[i].name);
    printf("\nEnter Code:");
    gets(E[i].code);
    printf("\nEnter City:");
    gets(E[i].city);
    }
    printf("\nEnter search code:");
    gets(se);
    for(i=0;i<2;i++)
    {
    search=(strcmpi(E[i].code,se));
    if(search==0)
    {
        printf("\nName=%s Code=%s City=%s",E[i].name,E[i].code,E[i].city);
    flag=1;
    }
    }
    if(flag==0)
    printf("\nNo record found");


}
