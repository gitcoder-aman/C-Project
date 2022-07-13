#include<stdio.h>
void search(int *,int );
main()
{
    int arr[5],i,n,*ptr;
    ptr=&arr[0];
    for(i=0;i<5;i++)
    {
        printf("\nEnter Element in arr[%d]",i);
        scanf("%d",ptr+i);
    }
    printf("\nEnter Searching Element=");
    scanf("%d",&n);
    search(&arr[0],n);
}
void search(int *ptr,int num)
{
    int i,flag=0;
    for(i=0;i<5;i++)
    {
           if (*(ptr+i)==num)
           {
               flag=1;
               break;
           }
    }
    if(flag==1)
        printf("\n%d is found",num);
    else
        printf("\n%d is not found",num);
}
