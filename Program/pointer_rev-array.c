#include<stdio.h>
main()
{
    int a[5],i,*ptr,rev;
    ptr=&a[0];
    printf("Entet element of array=");
    for(i=0;i<5;i++)
    scanf("%d",ptr+i);
    printf("reverse of Array Element is");
    for(i=4;i>=0;i--)
    {
           rev=*(ptr+i);
        printf("\n%d",rev);
    }
}
