#include<stdio.h>
#include<stdlib.h>
main()
{
    int *ptr,n,i,j,rev;
    printf("\nEnter Size of array=");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nEnter Element in array=");
        scanf("%d",ptr+i);
    }
    for(i=n-1;i>=0;i--)
    {
        rev=*(ptr+i);
        printf("\nReverse in array=%d",rev);
    }
}
