#include<stdio.h>
void max(int *,int *);
void input(int *);
main()
{
    int arr1[5],arr2[5],i,*ptr1,*ptr2;
    printf("Enter element  of 1st array:");
    input(&arr1[0]);
    printf("\nEnter Element of 2nd array:");
    input(&arr2[0]);
    max(&arr1[0],&arr2[0]);
}
void max(int *ptr1,int *ptr2)
{
    int max=*ptr1,i;
    for(i=0;i<5;i++)
    {
        if(*(ptr1+i)>max)
            max=*(ptr1+i);
    }
    for(i=0;i<5;i++)
    {
        if(*(ptr2+i)>max)
        {
            max=*(ptr2+i);
        }
    }
    printf("\nGreatest Element=%d",max);
}
void input(int *ptr)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Element in array=");
        scanf("%d",ptr+i);
    }
}

