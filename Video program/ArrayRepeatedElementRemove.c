#include<stdio.h>
int main()
{
  int i,size,k;
    
  printf("Enter size of Array\n");
  scanf("%d",&size);
 int arr[size];
  
  printf("Input Element:");
  for ( i = 0; i < size; i++)
  {
      scanf("%d",&arr[i]);
  }
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
      for ( i = 0; i < size; i++)
      {
          printf("%d ",arr[i]);
      }
     
}