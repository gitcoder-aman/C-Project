#include<stdio.h>
int main()
{
  int i,size,k;
    
  printf("Enter size of Array\n");
  scanf("%d",&size);
 int arr[size];
  int temp_size=size;
  printf("Input Element:");
  for ( i = 0; i < size; i++)
  {
      scanf("%d",&arr[i]);
  }
  // First of All Repeted Element are Remove
  int j=0,temp[size];

    for ( i = 0; i < size; i++)
    {
        temp[j]=arr[i];
        j++;
    }
    
      for ( i = 0; i < size; i++)
      {
          for ( j = i+1; j < size; j++)
          {
              if (arr[i]==arr[j])
              {
                  for ( k = j; k < size-1; k++)
                  {
                      arr[k]=arr[k+1];
                      
                  }
                  size--;
                  j--;
                  
              }
              
          }
          
      }
     // for ( i = 0; i < size; i++)
      //{
      //    printf("%d ",arr[i]);
     // }
     
// Print Number Repeted odd times
  printf("Number Repeated odd times");
   for ( i = 0; i < size; i++)
   {
       int count=0;
       for ( j = 0; j < temp_size; j++)
       {
           if (temp[j]==arr[i])
           {
              count++; 
              
           }
           
       }
       if (count%2!=0)
       {
            printf("\n%d Number Repeated %d odd times\n",arr[i],count);
       }  
   } 
}