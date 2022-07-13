#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter Size of Array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter a Array:\n");
    for ( i = 0; i < size; i++)
    {
        printf("Enter %d of position=",i);
        scanf("%d",&arr[i]);
    }
    printf("Before Array Arrangement in Reverse Order:");

    for ( i = 0; i < size; i++)
    {
        printf("\n%d",arr[i]);
    }
    int temp;
    printf("After Array Arrangement in Reverse Order:");
    for ( i = 0; i < size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    for ( i = 0; i < size; i++)
    {
         printf("\n%d",arr[i]);
    }
    
    
}