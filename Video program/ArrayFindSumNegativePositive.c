#include<stdio.h>
int main()
{
    int i,size,pos_sum=0,neg_sum=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];
    printf("\nEnter Numbers to Find sum of Positive & Negative:");
    
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            pos_sum+=arr[i];
        }
        else
        {
            neg_sum+=arr[i];
        }
    }
       printf(" The Sum of Posotive No is.%d",pos_sum);
       printf("\nThe Sum of Negative No is.%d",neg_sum); 
    
}