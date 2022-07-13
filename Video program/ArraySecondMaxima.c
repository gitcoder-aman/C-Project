#include<stdio.h>
int main()
{
    int i,size,max=0,sec_max=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];
     
     printf("\nEnter Numbers in Array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
      max=arr[0];
      sec_max=arr[0];
      for ( i = 0; i < size; i++)
      {
          if(max<arr[i])
          max=arr[i];
      }
      for ( i = 0; i < size; i++)
      {
           if(sec_max < arr[i] && max!=arr[i])
          sec_max=arr[i];
      }
      printf("Second Max Value in Array:%d",sec_max);
      
}