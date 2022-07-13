#include<stdio.h>
int main()
{
    int size,i;
     float sum=0,count=0;
    float Avg;
    printf("Enter Size of Array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter a Array:\n");
    for ( i = 0; i < size; i++)
    {
        printf("Enter %d of position=",i);
        scanf("%d",&arr[i]);
    }
   
    for ( i = 0; i < size; i++)
    {
         if ((i+1)%2==0)
         {
             sum+=arr[i];
             count++;
         }  
    }
    Avg=(sum/count);
    printf("Average of Numbers at Even Position:=%f",Avg);
    
}