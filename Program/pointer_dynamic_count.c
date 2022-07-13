#include<stdio.h>
#include<stdlib.h>
main()
{
    int *ptr,i,n,c=0;
    printf("\nEnter Size of Array=");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter Element in array=");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)>50)
            c++;
    }
    printf("\ncount of above 50=%d",c);
}
