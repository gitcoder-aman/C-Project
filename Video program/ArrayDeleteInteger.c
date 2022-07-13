#include<stdio.h>
int main()
{
    int i,size,delete,position=0,present=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];
     int temp[size-1];
     printf("\nEnter Numbers in Array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
      printf("Enter Delete a Specified integer in Array:");
      scanf("%d",&delete);

         for ( i = 0; i < size; i++)
    {
        if(arr[i]==delete)
        {
        position=i;
        present=1;
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
       if (present==1)
        {
              printf("New Array When Deleted value:\n");

               for ( i = 0; i < size-1; i++)
                 {
                     printf("\n%d",temp[i]);
                 }
        }
        else
        {
           printf("Which value you want to Deleted ! This Value is Not Present in Array:");
        }
     
      
}
      