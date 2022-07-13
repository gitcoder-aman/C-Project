//With Return Without Parameter....
#include<stdio.h>
int greatest_array();
main()
{
    int G;
    G=greatest_array();
    printf("\nGreatest Element=%d",G);
}
int greatest_array()
{
    int A[10],Great,i;
    printf("enter element in array= ");
    for(i=0;i<=9;i++)
        scanf("%d",&A[i]);
    Great=0;
    for(i=0;i<=9;i++)
    {
        if(Great<A[i])
            Great=A[i];
    }
    return(Great);
}
