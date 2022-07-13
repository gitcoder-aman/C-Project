#include<stdio.h>
main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("d:\\SUM.txt","w+");
    printf("\nEnter Two any nos=");
    scanf("%d%d",&a,&b);
    fprintf(fp,"Sum of %d and %d is %d",a,b,c=a+b);
    fscanf(fp,"%d,%d,%d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    fclose(fp);
}
