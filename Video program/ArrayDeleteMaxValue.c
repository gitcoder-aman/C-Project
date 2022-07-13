#include<stdio.h>
int main()
{
    int i,size,max=0,sec_max=0,position=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];
     int temp[size-1];
     printf("\nEnter Numbers in Array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
      max=arr[0];
         for ( i = 0; i < size; i++)
      {
          if(max<arr[i])
          {
          max=arr[i];
          position=i;
          }
      }

      for ( i = 0; i < size-1; i++)
      {                                     
          if(i < position)
          temp[i]=arr[i];

          if (i >= position)
          {
            temp[i]=arr[i+1];
          }
      }
      printf("New Array When Delete Maximun value=");

      for ( i = 0; i < size-1; i++)
      {
          printf("\n%d",temp[i]);
      }
      
}
      