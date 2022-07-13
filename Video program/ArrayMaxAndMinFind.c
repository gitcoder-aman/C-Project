#include<stdio.h>
int main()
{
    int i,size,max=0,min=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];
     
     printf("\nEnter Numbers in Array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
      max=arr[0];
     min=arr[0];
    for ( i = 0; i < size; i++)
    {
        if(max<arr[i])
        {
        max=arr[i];
        }

    if(min> arr[i])
    {
    min=arr[i];
    }
    }
    printf("Maximum Value in Array=%d",max);
    printf("\nMinimum Value in Array=%d",min);
}
    
    