#include<stdio.h>
int main()
{
    int size,i,add;
    printf("Enter Size of Array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter a Array:\n");
    for ( i = 0; i < size; i++)
    {
        printf("Enter %d of position=",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter an Added Number for which you want distinct pairs from an array:");
    scanf("%d",&add);
     
     int flag=0;
    for ( i = 0; i < size; i++)
    {
        int j=0;
        for ( j = i+j; j < size; j++)
        {
            if (arr[i]+arr[j+1]==add)
            {
                flag=1;
                printf("(%d,%d) Found at [%d,%d]\n",arr[i],arr[j+1],i,j+1);
            }
            
        } 
    }
     if (flag==0)
        {
            printf("Not Found:");
        }
    
}