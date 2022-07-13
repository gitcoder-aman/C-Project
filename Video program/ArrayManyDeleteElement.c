#include<stdio.h>
int main()
{
    int i,size,delete,count=0,j,k,l,m;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    
    int arr[size];

     printf("\nEnter Numbers in Array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("Enter the how many are u delete Value:");
     scanf("%d",&delete);

     int DEL[delete];

    for ( j = 0; j < delete; j++)
    {
      scanf("%d",&DEL[j]);
    }
       for ( k = 0; k < delete; k++)
       {
           for ( l = 0; l < size; l++)
           {
                if(arr[l]==DEL[k])
                {
                    count++;
                    for (m = l; m < size-1 ; m++)
                    {
                         arr[m]=arr[m+1];
                    }
                    
                   size--;
                }
                
           }
       }
       if (count>=1)
       {
           printf("LeftOver Element!");

       for ( i = 0; i < size; i++)
       {
           printf("\n%d ",arr[i]);
       }
       }
       else
       {
           printf("Those are Element want you delete. That Elements are not Present!");
           
       }
} 
     