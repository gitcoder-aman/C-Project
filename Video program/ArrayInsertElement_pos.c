#include<stdio.h>
int main()
{
  int i,size,Insert,position;
  
  printf("Enter size of Array\n");
  scanf("%d",&size);
  int arr[size]; //5
  int temp[size+1]; //6

  printf("Input Element:");
  for ( i = 0; i < size; i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Enter Element to be Insert:");
  scanf("%d",&Insert);
  printf("Enter Position for an Element to be inserted:");
  scanf("%d",&position);//4
   position-=1;//3
  for ( i = 0; i <= size; i++)
  {
     if (i < position)
     {
         temp[i]=arr[i];
     }
     
     if (i > position)
     {
         temp[i]=arr[i-1];
     }
     if(i==position)
     {        
         temp[i]=Insert;
     }
     
  }
  printf("After Inserted Value in Array:");

  for ( i = 0; i <= size; i++)
  {
       printf("\n%d",temp[i]);
  }
    
}