#include<stdio.h>
main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("d:\\SUM.txt","r");
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    fclose(fp);
}
