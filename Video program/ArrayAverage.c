#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("\nEnter 10 Numbers:");

    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= 9; i++)
    {
        sum+=a[i];
    }
    float Avg= sum/10.0;
    printf("Average is %f",Avg);
    
    return 0;
}
