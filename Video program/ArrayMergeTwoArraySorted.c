#include<stdio.h>
int main()
{
    int size1,size2,i,j=0,temp;
    printf("Enter Size of Arary1");
    scanf("%d",&size1);
    printf("Enter Size of Arary2");
    scanf("%d",&size2);
    int Merge=size1+size2;

    int arr1[size1],arr2[size2],merge[size1+size2];
    
    printf("Enter Element in Array1\n");
    for ( i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter Element in Array2\n");
    for ( i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

     for ( i = 0; i < size1; i++)
     {
         merge[j]=arr1[i];
         j++;
     }
      for ( i = 0; i < size2; i++)
     {
         merge[j]=arr2[i];
         j++;
     }
     
    printf("After Merged of Two Array:");
    
    for ( i = 0; i < Merge; i++)
    {
        printf("%d\n",merge[i]);
    }
    for ( i = 0; i < Merge; i++)
    {
        for ( j = i+1; j < Merge; j++)
        {
            if (merge[i] > merge[j])
            {
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
            
        }
        
    }
    printf("After Sorting of Two Array:");
    for ( i = 0; i < Merge; i++)
    {
        printf("%d\n",merge[i]);
    } 
}