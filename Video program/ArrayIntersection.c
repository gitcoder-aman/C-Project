#include<stdio.h>
int main()
{
    int size1,size2,Intersectsize;
    printf("Enter Size of Arary1");
    scanf("%d",&size1);
    printf("Enter Size of Arary2");
    scanf("%d",&size2);

    if (size1 < size2)
    {
        Intersectsize=size1;
    }
    else if (size2 < size1)
    {
        Intersectsize=size2;
    }
    else
    {
         Intersectsize=size1;
    }
    
    int Intersect[Intersectsize],arr1[size1],arr2[size2],i;
    
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
   
    int k=0,j;
        for ( i = 0; i < size1; i++)
    {
        for ( j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {  
                    Intersect[k]=arr1[i];
                    k++;
            }
            
        }
    }
        
    printf("Find Intersection Value Of Two Array:");
    for ( i = 0; i < k; i++)
    {
        printf("%d\n",Intersect[i]);
    }
}

