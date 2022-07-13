#include<stdio.h>
#include<string.h>
main()
{
    struct book
    {
        int bookid;
        char title[20];
        float price;
    };
       char ch;
       struct book b1;
       FILE *fp;
       fp=fopen("d:\\booklbry.txt","ab+");
       do
       {
       printf("\nEnter Bookid,title and price::\n");
       scanf("%d",&b1.bookid);
       fflush(stdin);
       gets(b1.title);
       scanf("%f",&b1.price);
       fwrite(&b1,sizeof(b1),1,fp);
       printf("\nWant to add more book(y/n)>::");
       scanf(" %c",&ch);
       }while(ch=='y');
   rewind(fp);

        while(fread(&b1,sizeof(b1),1,fp)==1)
        {
            printf("\nBookid=%d title=%s price=%f",b1.bookid,b1.title,b1.price);
        }
       fclose(fp);
}

